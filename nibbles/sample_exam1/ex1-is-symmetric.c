/*
Author: Niall Carrick
Date: 30/10/2025
Program: Given a string as an argument, the program will print yes or no if the
given string is symettric

Approach:
First we read in the string to a variable.

We run a function isSymmetric which will return a boolean of if the string is
symmetric.

The function will immediately return false if the length is even as a
string cannot be symmetric if it has an even number of characters, we can check
this with strlen.

We then iterate through the string with indexes on the left hand and right hand
of the string which will check each character against its matching character, if
any characters do not match, we return false.

If the loop completes and finds no characters that do not match, then the
function returns True, as the string is symmetric, and then the main function
prints "yes" if true and "no" if false.

*/
#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

#define BOOL int

// Takes in string and integer of length of string and returns if string is
// symmetric
BOOL isSymmetric(char *str, int size);

int main(int argc, char *argv[]) {
    // Assign the string to a var
    char *str = argv[1];

    int length = strlen(str);

    // Function returns true or false if string is symmetric or not
    BOOL str_is_symmetric = isSymmetric(str, length);

    // If string is symmetric then print yes otherwise print no
    if (str_is_symmetric) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}

BOOL isSymmetric(char *str, int size) {
    // If length of string is even then it cannot be symmetric
    if (size % 2 == 0) {
        return FALSE;
    }

    // Create left and right indexes so we can iterate through the list
    int left = 0;
    int right = size - 1;

    // Run this loop until the two indexes meet in the middle of the string
    while (left < right) {

        // Compare each character in the string to the corresponding one on the
        // opposite end of the string
        if (str[left] != str[right]) {
            return FALSE;
        }

        // Move each of the indexes closer to one another each iteration
        left += 1;
        right -= 1;
    }

    // If each character was the same then return true
    return TRUE;
}
