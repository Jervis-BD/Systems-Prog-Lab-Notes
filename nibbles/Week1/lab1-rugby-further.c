#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int scores[] = {5, 2, 3, 3};

    int total = 0;

    if (argc < 4) {
        return 0;
    }

    for (int i = 1; i < 5; i++) {
        int a = atoi(argv[i]);
        if (a < 0) {
            // printf("Negative values not accepted\n");
            return 0;
        }
        total += a * scores[i - 1];
    }

    printf("%d\n", total);

    return 0;
}
