/*
 * Author: Ben Davies 
 * Date: 18/11/2026
 * Purpose: Implement a singly linked list to read in integers and print them out on seperate lines
 */
#include <stdio.h>
#include <stdlib.h>

/* Type Defintions */
typedef struct slist slist;

/* Struct creation*/
struct slist{
  int val;
  slist *next;
};


/* Function prototyping */
void print_linked_list(slist *start);

/* Main */
/* Input in form n, [n integers] */
int main(int argc, char *argv[])
{
  int len = atoi(argv[1]) + 2;
  slist *first, *current;
  first = (slist*)calloc(1,sizeof(slist));
  current = first;
  for(int i = 2; i < len; i++){
    current->val = atoi(argv[i]);
    current->next = (slist*)calloc(1,sizeof(slist));
    current = current->next;
  }
  current->next = NULL;
   
  print_linked_list(first);

  return 0;
}

void print_linked_list(slist *start){
  slist *curr = start;
  while (curr->next != NULL) {
    printf("%d\n", curr->val);
    curr = curr->next;
  }
}
