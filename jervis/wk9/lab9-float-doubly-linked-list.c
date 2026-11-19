/*
 * Author: Ben Davies 
 * Date: 18/11/2026
 * Purpose: Implement a doubly linked list to read in floats and print them out on seperate lines in reverse order
 */
#include <stdio.h>
#include <stdlib.h>

/* Type Defintions */
typedef struct slist slist;

/* Struct creation*/
struct slist{
  float val;
  slist *next;
  slist *prev;
};


/*Function prototyping */
void print_linked_list_rev(slist *start);
void create_linked_list(slist *start, char *argv[]);

/* Main */
/* Input in form n, [n floats] */
int main(int argc, char *argv[])
{

  slist *first, *current;

  first = (slist*)calloc(1,sizeof(slist));

  create_linked_list(first, argv);
  print_linked_list_rev(first);

  return 0;
}

void create_linked_list(slist *first, char *argv[]){
  slist *curr = first;
  curr->prev = NULL;
  int len = atoi(argv[1]) + 1;

  for(int i = 2; i <= len; i++){
    curr->val = atof(argv[i]);
    curr->next = (slist*)calloc(1,sizeof(slist));
    slist *prev = curr;
    curr = curr->next;
    curr->prev = prev;
  }
  /* Remove extra initialised but unused pointer from end */
  curr->prev->next = NULL;
}

void print_linked_list_rev(slist *start){
  slist *curr = start;
  /* Move to the end of the doubly linked list */
  while (curr->next != NULL) {
    curr = curr->next;
  }
  /* Move back through the list in reverse */
  while (curr->prev != NULL){
    printf("%.2f\n", curr->val);
    curr = curr->prev;
  }
  /* extra print to print first val */
  printf("%.2f\n", curr->val); 
}
