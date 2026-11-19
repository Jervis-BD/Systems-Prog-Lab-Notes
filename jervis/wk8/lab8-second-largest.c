/*
 Author: Ben Davies
 Date: 29/10/2026
 Purpose: Find the second highest value in an array
 */

#include <stdio.h>
#include <stdlib.h>
#include <float.h>
float secondlarge(int len, float *arr);

int main(int argc, char *argv[])
{
  argv++;
  int len = argc - 1;
  float *nums = calloc(len, sizeof *nums);
  for (int i = 0; i < len; i++){
    nums[i] = atof(argv[i]);
  }
  printf("%.1f\n", secondlarge(len, nums));
  free(nums);
  return 0;
}


float secondlarge(int len, float *arr)
{
  float biggest = arr[0];
  float second = -FLT_MAX;
  
  for (int i = 0; i < len; i++){
    float val = arr[i];
    if (biggest < val) {
      second = biggest;
      biggest = val;
    } else if (second < val && val != biggest) {
        second = val;
    }
  }
  return second;
}
