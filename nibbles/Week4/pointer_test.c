#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int doubleX(int x) { return x * 2; }

int main(int argc, char *argv[]) {

    int number;

    printf("Enter the value: ");
    scanf("%d", &number);

    printf("%d\n", doubleX(number));

    return 0;
}
