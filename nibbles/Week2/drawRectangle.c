#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int length, width;
    length = atoi(argv[2]);
    width = atoi(argv[1]);

    for (int i = 0; i < length; i++) {

        for (int j = 0; j < width; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
