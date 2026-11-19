#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Function declaration*/

float sum(float, float);
float sub(float, float);
float mult(float, float);
float divi(float, float);
float pwr(float, float);
float nlog(float, float);

/* Main Function*/

int main(int argc, char *argv[]){


  float num1, num2;
  num1 = atof(argv[1]);
  num2 = atof(argv[2]);
  
  float (*function_ptr)(float, float);

  function_ptr = sum;
  printf("%.2f\n", function_ptr(num1, num2));

  function_ptr = sub;
  printf("%.2f\n", function_ptr(num1, num2));

  function_ptr = mult;
  printf("%.2f\n", function_ptr(num1, num2));

  function_ptr = divi;
  printf("%.2f\n", function_ptr(num1, num2));

  function_ptr = pwr;
  printf("%.2f\n", function_ptr(num1, num2));

  function_ptr = nlog;
  printf("%.2f\n", function_ptr(num1, num2));
}



/* Functions */

float sum(float num1, float num2){
  return (num1 + num2);
}
float sub(float num1, float num2){
  return (num1 - num2);
}
float mult(float num1, float num2){
  return (num1 * num2);
}
float divi(float num1, float num2){
  return (num1 / num2);
}
float pwr(float num1, float num2){
  return (powf(num1, num2));
}
float nlog(float num1, float num2){
  return (logf(num1) + logf(num2));
}