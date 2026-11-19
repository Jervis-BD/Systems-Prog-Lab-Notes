#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;

struct Node {
        int value;
        Node *next;
        Node *prev;
};

// Function Prototypes
Node *get_nodes(int data[], int n);
void print_nodes(Node *node);
Node *search_nodes(Node *node, int value);

int main(int argc, char *argv[]) {

    // Starter set of nums
    int n = 10;
    int nums[] = {8, 7, 3, 4, 5, 6, 9, 2, 14, 12};

    // Initialise Linked List from given nums
    Node *start = NULL;
    start = get_nodes(nums, n);

    // Take in two arguments from command line
    // Value already in list and new value we want to add after that value
    int search = atoi(argv[1]);
    int new_val = atoi(argv[2]);

    // Find node with desired value
    Node *found_node = NULL;
    found_node = search_nodes(start, search);

    // Once node with desire value is found, insert new node afterwards
    Node *new_node = (Node *)calloc(1, sizeof(Node));
    new_node->value = new_val;
    new_node->next = found_node->next;
    found_node->next = new_node;

    // Print out new linked list
    print_nodes(start);

    return 0;
}

Node *get_nodes(int data[], int n) {
    Node *curr, *first;

    first = (Node *)calloc(1, sizeof(Node));
    first->value = data[0];
    first->prev = NULL;

    curr = first;
    for (int i = 1; i < n; i++) {

        curr->next = (Node *)calloc(1, sizeof(Node));
        curr->next->value = data[i];
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

Node *search_nodes(Node *node, int value) {
    while (node->next && node->value != value) {
        node = node->next;
    }

    return node;
}
