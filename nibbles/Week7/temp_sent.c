#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void assign_arr(char *p, int size, char *data[]) {

    /*for (int i = 0;i < size;i++) {
        *(p + i) = data[];
    }*/
}

int main(int argc, char *argv[]) {

    // Define array of string pointers
    char **longest_strings;

    int amount_of_strings = 0;

    int longest_length = 0;
    for (int i = 0; i < argc - 1; i++) {
        // Gets length of current string in args
        int curr_len = strlen(argv[i + 1]);

        // If current string is same size or bigger than largest seen
        if (curr_len >= longest_length) {
            if (curr_len > longest_length) {
                amount_of_strings = 1;
            } else {
                amount_of_strings += 1;
            }

            longest_length = curr_len;

            // Resize array of pointers to desired size
            char **pTemp =
                realloc(longest_strings, amount_of_strings * sizeof(char *));

            // Allocate memory to our last pointer in array
            pTemp[amount_of_strings - 1] = calloc(longest_length, sizeof(char));
            if (!pTemp) {
                return 0;
            }

            // Finish reallocating memory
            longest_strings = pTemp;

            // Copy current string to end of array
            strcpy(longest_strings[amount_of_strings - 1], argv[i + 1]);
        }
    }

    // Print out all longest strings in array
    for (int i = 0; i < amount_of_strings; i++) {
        printf("%s\n", longest_strings[i]);
    }

    return 0;
}
