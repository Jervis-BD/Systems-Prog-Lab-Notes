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
        //
        // Gets length of current string in args
        int curr_len = strlen(argv[i + 1]);

        // If current string is largest seen yet
        if (curr_len > longest_length) {
            longest_length = curr_len;

            amount_of_strings = 1;

            // Allocate memory for one pointer
            longest_strings = calloc(amount_of_strings, sizeof(char *));

            // Allocate memory for the string length to the first and only
            // pointer in array
            longest_strings[0] = calloc(longest_length, sizeof(char));

            // Copy current string to pointer in array
            strcpy(longest_strings[0], argv[i + 1]);

            // If current string is same length as current longest
        } else if (curr_len == longest_length) {
            amount_of_strings += 1;

            // Extend length of array of pointers by 1
            char **pTemp =
                realloc(longest_strings, amount_of_strings * sizeof(char *));

            // Allocate memory to our added pointer
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
