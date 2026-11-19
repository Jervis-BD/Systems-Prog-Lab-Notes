#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

int main(int argc, char *argv[]) {

    float radius = 0;
    float area = 0;

    // radius = atoi(argv[1]);

    if (radius < 0) {
        // radius = radius * -1;
        printf("Radius should not be negative\n");
        return 0;
    }

    radius = radius * radius;

    area = radius * PI;

    if (area < 0) {
        area = area * -1;
    }

    printf("%.2f\n", area);
    // printf("%9.2f\n", area);

    return 0;
}
