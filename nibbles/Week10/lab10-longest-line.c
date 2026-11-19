#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define max length of sentence
#define MAX 200

// Function Prototypes
int longest_string(char *lines[], char **longest, int num_lines);
int read_lines(char *filename, char *lines[]);

int main(int argc, char *argv[]) {

    char *lines[MAX];

    char *filename = "paragraph.txt";

    int num_lines = read_lines(filename, lines);

    char *longest;
    int longest_len = longest_string(lines, &longest, num_lines);
    printf("%d", longest_len);
    printf("%s\n\n", longest);

    return 0;
}

int longest_string(char *lines[], char **longest, int num_lines) {
    *longest = calloc(MAX, sizeof(char));
    int longest_len = 0;
    int curr_len = 0;

    for (int i = 0; i < num_lines; i++) {
        curr_len = strlen(lines[i]);

        if (curr_len > longest_len) {
            *longest = lines[i];
            longest_len = curr_len;
        }
    }

    return longest_len;
}

int read_lines(char *filename, char *lines[]) {
    FILE *pfile = NULL;
    pfile = fopen(filename, "r");

    char *current_sen = calloc(MAX, sizeof(char));
    int i = 0;

    int mchar = fgetc(pfile);

    int line_counter = 0;

    while (mchar != EOF) {
        current_sen[i] = mchar;
        if ((char)mchar == '.' || (char)mchar == '?') {

            lines[line_counter] = current_sen;
            line_counter++;

            current_sen = calloc(MAX, sizeof(char));
            i = 0;
        } else {
            i++;
        }

        mchar = fgetc(pfile);
    }

    return line_counter;
}
