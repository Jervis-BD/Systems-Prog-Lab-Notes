#include<stdio.h>
#include<stdlib.h>

int findmax(int *numbers[], int argc) {
  int counter = 0;
   for(int j = 0; j < argc; j++) {
      if(numbers[j] > counter) {
        counter = numbers[j];
      }
   }
  return counter;
}

int processNums(char*nums[], int length) {
  int numbers[length];
  for(int i = 0; i < length; i++) {
    numbers[i] = atoi(nums[i]);
  }
  return *numbers;
}

int main(int argc, char*argv[])
{
  int numberList = processNums(argv, argc);
  printf("%d\n", findmax(numberList, argc));
  return 0; 
}

