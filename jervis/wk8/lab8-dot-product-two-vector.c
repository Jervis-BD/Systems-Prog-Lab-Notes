/*
Author: Ben Davies
Date: 29/10/2026
Purpose: Find Dot Product of 2 equal sized Vectors
*/

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  int *pMatrix = NULL;
  int *pDotprod = NULL;
  int len = argc - 1;
  int dotprod = 0;
  int n = atoi(argv[1]);
  pMatrix = (int*)malloc(len*(sizeof(int)));

  for (int i = 0; i < len - 1; i++)
  {
    *(pMatrix+i) = atoi(argv[i+2]);
  }
  for(int i = 0; i < n ;i++)
  {
    dotprod = dotprod + (*(pMatrix+i) * *(pMatrix+i+n));
  }
  printf("%d\n", dotprod);
  free(pMatrix);
  pMatrix = NULL;
  return 0;
}
