#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

  int numbers[argc];
  int count = 0;

  for (int i = 1; i < argc; i++) {
    numbers[i] = atoi(argv[i]);
    if (numbers[i] % 2 != 0){
      count = count + 1;
    }
  }
  printf("%d\n", count);
  return 0;
}
