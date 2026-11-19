#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;

struct Node {
        int value;
        Node *next;
        Node *prev;
};

// Function Prototype
Node *get_nodes(char *data[], int n);
void print_nodes(Node *node);
void *pop(Node *node);
void push(Node *node, int val);

int main(int argc, char *argv[]) {
    Node *node = NULL;
    Node *first = NULL;
    int n = atoi(argv[1]);
    node = get_nodes(argv, n);
    first = node;

    for (int i = 0; i < argc - n - 2; i++) {
        pop(node);
    }

    for (int i = 0; i < argc - n - 2; i++) {
        push(node, atoi(argv[n + i + 2]));
    }

    print_nodes(node);

    return 0;
}

Node *get_nodes(char *data[], int n) {
    Node *curr, *first;

    first = (Node *)calloc(1, sizeof(Node));
    first->value = atoi(data[2]);
    first->prev = NULL;

    curr = first;
    for (int i = 1; i < n; i++) {

        curr->next = (Node *)calloc(1, sizeof(Node));
        curr->next->value = atoi(data[i + 2]);
        curr->next->prev = curr;

        curr = curr->next;
    }

    curr->next = NULL;

    return first;
}

void print_nodes(Node *node) {
    int count = 0;
    Node *p = NULL;
    for (p = node; p != NULL; p = p->next) {
        ++count;
        printf("%d\n", p->value);
    }
}

void *pop(Node *node) {

    while (node->next != NULL) {
        node = node->next;
    }

    node->prev->next = NULL;
    free(node);
}

void push(Node *node, int val) {
    while (node->next != NULL) {
        node = node->next;
    }

    node->next = (Node *)calloc(1, sizeof(Node));
    node->next->value = val;
}
