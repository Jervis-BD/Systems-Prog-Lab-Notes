#include <stdio.h>
#include <stdlib.h>

void line(int width) {

    for (int j = 0; j < width; j++) {
        printf("*");
    }
    printf("\n");
}

int main(int argc, char *argv[]) {

    int length, width;
    length = atoi(argv[2]);
    width = atoi(argv[1]);

    line(width);

    for (int i = 0; i < length - 2; i++) {

        printf("*");

        for (int j = 0; j < width - 2; j++) {
            printf(" ");
        }
        printf("*\n");
    }

    line(width);

    return 0;
}
