#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

    // Initialises array of the words
    char words[100][10];

    // Gets length of entire sentence
    int sen_len = strlen(argv[1]);

    int i = 0;
    int start = 0;
    int end = 0;

    int word_index = 0;

    while (i < sen_len) {

        char curr[1] = {argv[1][i]};
        // printf("%c", argv[1][i]);
        // printf("%d", strcmp(curr, " "));

        if (strcmp(curr, " ") == 88) {

            int k = 0;
            for (int j = start; j < i; j++) {
                // printf("%d\n", k);
                // printf("%c ", argv[1][j]);
                words[word_index][k] = argv[1][j];
                // printf("%c\n", words[word_index][k]);
                k++;
            }
            words[word_index][k] = '\0';
            //  printf("End\n");

            start = i + 1;
            word_index++;
        }
        i++;
    }

    int k = 0;
    for (int j = start; j < sen_len; j++) {
        // printf("%c\n", argv[1][j]);
        words[word_index][k] = argv[1][j];
        k++;
    }

    words[word_index][k] = '\0';

    for (int i = 0; i < word_index + 1; i++) {
        // printf("%s\n", words[i]);
    }

    // printf("%d\n", strlen(words[0]));

    int longest_length = 0;

    char longest_word[20];

    int curr_len = 0;

    for (int i = 0; i < word_index + 1; i++) {
        // printf("%s\n", words[i]);
        //   printf("%d\n", strlen(words[i]));

        curr_len = strlen(words[i]);
        if (curr_len > longest_length) {
            longest_length = curr_len;
            // longest_word = words[i];
            strcpy(longest_word, words[i]);
        }
    }

    printf("%s\n", longest_word);

    return 0;
}
