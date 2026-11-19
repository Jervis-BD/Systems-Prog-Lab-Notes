#include<stdio.h>
#include<stdlib.h>
#include<string.h>

float multiply(float f1, float f2){
  return (f1 * f2);
}
float divide(float f1, float f2){
  return (f1 / f2);
}

int main(int argc, char *argv[])
{ 
  float num1 = atof(argv[2]);
  float num2 = atof(argv[3]);
  if (strcmp(argv[1], "multiply") == 0) {
    printf("%f\n", multiply(num1, num2));
  }
  else if (strcmp(argv[1], "divide") == 0){
      if ((num1 != 0) && (num2 != 0)){
        printf("%f\n", divide(num1, num2));
      }
      else{
        printf("invalid\n");
        }
      }
  else{
    printf("failed to find\n");
    }
return 0;
}
