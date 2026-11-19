#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

  int numbers[argc];
  int found = 0;
  for (int i = 1; i < argc; i++){
    numbers[i] = atoi(argv[i]);
    if (numbers[i] % 2 == 0){
      found = 1;
      printf("%i - ", i - 1);
      printf("%i\n", numbers[i]);
    }
  } 
  if(found == 0){
    printf("Not found!\n");
  }
  return 0;
}
