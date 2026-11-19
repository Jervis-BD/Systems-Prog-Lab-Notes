#include <stdio.h>
#include <stdlib.h>

int findDuplicate(int numbers[], int length);

int main(int argc, char *argv[]) {
    int length = argc - 1;
    int numbers[50];
    int found;

    for (int i = 0; i < length; ++i) {
        numbers[i] = atoi(argv[i + 1]);
    }

    found = findDuplicate(numbers, length);
    if (found == -1) {
        printf("no duplicated number\n");
    } else {
        printf("%d\n", found);
    }

    return 0;
}

int findDuplicate(int numbers[], int length) {
    for (int i = 0; i < length; ++i) {
        for (int j = i + 1; j < length; ++j) {
            if (numbers[i] == numbers[j]) {
                return numbers[i];
            }
        }
    }
    return -1;
}
