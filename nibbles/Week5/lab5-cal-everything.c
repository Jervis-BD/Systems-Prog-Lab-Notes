#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float sum(float, float);
float diff(float, float);
float prod(float, float);
float divide(float, float);
float power(float, float);
float n_log(float, float);

int main(int argc, char *argv[]) {

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    float (*pFunction)(float, float);

    // Sum
    pFunction = sum;
    printf("%.2f\n", pFunction(a, b));

    // Difference
    pFunction = diff;
    printf("%.2f\n", pFunction(a, b));

    // Product
    pFunction = prod;
    printf("%.2f\n", pFunction(a, b));

    // divide
    pFunction = divide;
    printf("%.2f\n", pFunction(a, b));

    // Power
    pFunction = power;
    printf("%.2f\n", pFunction(a, b));

    // Natural Log
    pFunction = n_log;
    printf("%.2f\n", pFunction(a, b));

    return 0;
}

float sum(float a, float b) { return a + b; }

float diff(float a, float b) { return a - b; }

float prod(float a, float b) { return a * b; }

float divide(float a, float b) { return a / b; }

float power(float a, float b) { return pow(a, b); }

float n_log(float a, float b) { return log(a) + log(b); }
