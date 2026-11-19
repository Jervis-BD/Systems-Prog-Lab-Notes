#include<math.h>
#include<stdlib.h>
#include<stdio.h>

int main(int argc, char *argv[])
{
  float pi = 3.1415;
  if (argc == 1){
    printf("no input given\n");
    return 0; 
    }
  else if (argc == 2)
  {
    printf("Two arguements needed!\n"); 
    return 0;
  }
  else if (atoi(argv[1]) < 0 || atoi(argv[2]) < 0) {
    printf("The radious or height cannot be negative!");
  }
  else {
  
    /* Getting data from command-line arguments*/
    float radius = atof(argv[1]);
    float height = atof(argv[2]);

    float area = (2.0 * pi * radius) * (radius + height); /* Formula for calculating the cylinder area */
    printf("%.2f\n", area);
  }
  return 0;
}

