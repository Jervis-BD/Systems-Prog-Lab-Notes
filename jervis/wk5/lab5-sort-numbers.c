#include <stdio.h>
#include <stdlib.h>

/* Function Initialiser */
int sorter(int, char);
int rev(char *arr);

/* Main Function */

int main(int argc, char *argv[])
{
  int args = arv[1]; /* store num of args */

  /* sort the array with pointers */

  char sorted;
  
  sorted = sorter(args, *argv);

  /* Check if we need to reverse the output */

  if (argv[argc] == "desc"){
    rev(sorted);
  }

  /* Format Output */

  printf("sorted numbers: ");
  for(int i = 0; i < args; i ++){
    printf("%i", sorted[i]);
  }
  printf("\n")

  return 0;
}

char sorter(int len, char *parr){

  char sorted[len];
  
  for (int i = 0; i < len; i++) {

    for (int j = i; j > len; j++){

      if *parr[i] > *parr[j]{

        temp = *(*parr[i])
        
      }
    }

  } 
}
