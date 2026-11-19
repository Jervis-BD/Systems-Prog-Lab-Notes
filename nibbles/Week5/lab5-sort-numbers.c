#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void asc(int *p, int n);
void desc(int *p, int n);

int main(int argc, char *argv[]) {

    int len = atoi(argv[1]);

    int arr[len];

    char *order = argv[argc - 1];

    int *p = arr;

    for (int i = 0; i < len; i++) {
        *(p + i) = atoi(argv[i + 2]);
    }

    void (*pFunction)(int *, int);

    if (strcmp(order, "asc") == 0) {
        pFunction = asc;
    } else {
        pFunction = desc;
    }

    pFunction(p, len);

    printf("Sorted numbers: ");
    for (int i = 0; i < len - 1; i++) {
        printf("%d ", *(p + i));
    }
    printf("%d\n", *(p + len - 1));

    return 0;
}

void asc(int *p, int n) {

    int hasSwapped = 0;
    int runs = 0;

    while (runs < 2) {

        hasSwapped = 0;

        for (int i = 0; i < n - 1; i++) {
            if (*(p + i) > *(p + i + 1)) {
                int temp;
                temp = *(p + i);
                *(p + i) = *(p + i + 1);
                *(p + i + 1) = temp;

                hasSwapped = 1;
            }
        }

        if (!hasSwapped) {
            runs += 1;
        }
    }
}

void desc(int *p, int n) {

    int hasSwapped = 0;
    int runs = 0;

    while (runs < 2) {

        hasSwapped = 0;

        for (int i = 0; i < n - 1; i++) {
            if (*(p + i) < *(p + i + 1)) {
                int temp;
                temp = *(p + i);
                *(p + i) = *(p + i + 1);
                *(p + i + 1) = temp;

                hasSwapped = 1;
            }
        }

        if (!hasSwapped) {
            runs += 1;
        }
    }
}
