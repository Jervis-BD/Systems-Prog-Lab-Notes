#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{

  int width = atoi(argv[1]);
  
  for (int i = 1; i <= width; i++){
    printf("*");
  }
  printf("\n");
  int height = width;
  for (int i = 3; i <= height; i++)
  {
    printf("*");
    for (int j = 3; j <= width; j++){
      printf(" ");
    }
    printf("*\n");
  }
  for (int i = 1; i <= width; i++)
  {
    printf("*");
  }
  printf("\n");
  return 0;
}
