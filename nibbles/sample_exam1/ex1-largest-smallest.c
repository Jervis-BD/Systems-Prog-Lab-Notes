/*
Author: Niall Carrick
Date: 30/10/2025
Program: Given arguments consisting of a string saying largest or smallest and a
series of float values print out the largest or smallest of those values
depending on which option the user choses.

Approach: Reads in all the numbers to an array using the read_vals function,
then check which option the user chose, largest or smallest, using string
comparisons, Then run either the function largest() or smallest() which will
each return the desired value, then print out the ouptutted value to 2 decimal
places.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void read_vals(float *p, int size, char *data[]);

float largest(float *arr, int size);

float smallest(float *arr, int size);

int main(int argc, char *argv[]) {

    // Get amount of nums in arguments
    int size = (argc - 2);

    // Initialise array with max size of 50
    float nums[50];

    // Assign values from arguments to array
    read_vals(nums, size, argv);

    float output_val;

    // Choose largest or smallest value
    if (strcmp(argv[1], "largest") == 0) {
        output_val = largest(nums, size);
    } else {
        output_val = smallest(nums, size);
    }

    // Output the desired value
    printf("%.2f\n", output_val);

    return 0;
}

void read_vals(float *p, int size, char *data[]) {

    // Assign all the numbers in the argument list to the passed pointer
    for (int i = 0; i < size; i++) {
        *(p + i) = atof(data[i + 2]);
    }
}

// Find the largest value in the given array
float largest(float *arr, int size) {
    float largest_val = arr[0];

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest_val) {
            largest_val = arr[i];
        }
    }

    return largest_val;
}

// Find the smallest value in the array
float smallest(float *arr, int size) {
    float smallest_val = arr[0];

    for (int i = 0; i < size; i++) {
        if (arr[i] < smallest_val) {
            smallest_val = arr[i];
        }
    }

    return smallest_val;
}
