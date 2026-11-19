#include <stdio.h>
#include <stdlib.h>

/*
int *get_grades(int length) {
    int grades[length];

    int in;
    int i = 0;

    while (i < length) {
        scanf("%d", &in);
        grades[i] = in;

        i += 1;
    }

    return grades;
}*/

int sumCal(int grades[], int length) {
    int result = 0;
    for (int i = 0; i < length; i++) {
        result += grades[i];
    }

    return result;
}

double average(double x, double y) { return (x + y) / 2; }

int main(int argc, char *argv[]) {

    // int r;

    // int grades[] = {10, 8, 6, 5, 7};

    // int *grades = get_grades(5);

    // r = sumCal(grades, 5);

    // printf("%d\n", r);

    double a = 5.5;
    double b = 6.6;

    double result = average(a, b);

    printf("a = %.2f\n", a);
    printf("b = %.2f\n", b);
    printf("average = %.2f\n", result);

    return 0;
}
