#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char find_frequent(const char *word)
{
  int max_count = 0;
  char most_frequent = '\0';

  if (word == NULL || *word == '\0') {
    return most_frequent;
  }

  for (int i = 0; word[i] != '\0'; i++) {
    if (!isalnum((unsigned char)word[i])) {
      continue;
    }

    int current_count = 0;
    for (int j = 0; word[j] != '\0'; j++) {
      if (isalnum((unsigned char)word[j]) && word[j] == word[i]) {
        current_count++;
      }
    }

    if (current_count > max_count) {
      max_count = current_count;
      most_frequent = word[i];
    }
  }

  return most_frequent;
}

int main(int argc, char *argv[])
{
  if (argc < 2) {
    fprintf(stderr, "Usage: %s <word>\n", argv[0]);
    return 1;
  }

  printf("%c\n", find_frequent(argv[1]));
  return 0;
}
