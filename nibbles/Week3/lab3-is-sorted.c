#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    // Initialises the array
    int n = argc - 1;
    int arr[n];

    // Adds all the elements to the array
    for (int i = 0; i < n; i++) {

        arr[i] = atoi(argv[i + 1]);
    }

    // Sorts the array

    int hasSwapped = 0;
    int runs = 0;

    while (runs < 2) {

        hasSwapped = 0;
        // printf("%d", runs);

        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                int temp;
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;

                hasSwapped = 1;
            }
        }

        if (!hasSwapped) {
            runs += 1;
        }
    }

    // Prints all the elements of the now sorted array
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
