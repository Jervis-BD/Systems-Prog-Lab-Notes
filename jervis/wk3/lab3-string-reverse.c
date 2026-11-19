#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int Counter(char*nums[]){
  unsigned int count = 0;
  while(nums[1][count] != '\0'){
    ++count;
    }
  return count;
  }

int main(int argc, char *argv[])
{
  for(unsigned int i = Counter(argv); i != 0; i--){
    printf("%c", argv[1][i -1]);
  }
  printf("\n");

  return 0;
  }
