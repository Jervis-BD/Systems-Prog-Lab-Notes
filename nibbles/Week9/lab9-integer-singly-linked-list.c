#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;

struct Node {
        float value;
        Node *next;
};

// Function Prototype
Node *get_nodes(char *data[], int n);
void print_nodes(Node *node);

int main(int argc, char *argv[]) {
    Node *node = NULL;
    int n = atoi(argv[1]);
    node = get_nodes(argv, n);

    print_nodes(node);

    return 0;
}

Node *get_nodes(char *data[], int n) {
    Node *curr, *first;

    first = (Node *)calloc(1, sizeof(Node));
    first->value = atoi(data[2]);

    curr = first;
    for (int i = 1; i < n; i++) {

        curr->next = (Node *)calloc(1, sizeof(Node));
        curr->next->value = atof(data[i + 2]);

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
        // printf("Student #%d: ", count);
        // printf("%s, %s, %.2f\n", p->name, p->programme, p->grade);
        printf("%.2f\n", p->value);
    }
}
