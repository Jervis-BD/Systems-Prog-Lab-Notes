#include <stdio.h>
#include <stdlib.h>

void assign_vals(int *p, int size, char *argv[]) {
    for (int i = 0; i < size; i++) {
        p[i] = atof(argv[i + 1]);
    }
}

int main(int argc, char *argv[]) {
    //
    int *nums = calloc(argc - 1, sizeof(int));
    assign_vals(nums, argc - 1, argv);

    // Define vars for highest and lowest value in nums
    int max = nums[0];
    int min = nums[0];

    // Iterate through nums and find highest and lowest value
    for (int i = 1; i < argc - 1; i++) {
        if (nums[i] > max) {
            max = nums[i];
        }
        if (nums[i] < min) {
            min = nums[i];
        }
    }

    // Check if max is atleast twice as big as smallest number in list
    if (max >= (min * 2)) {
        printf("%d\n", max);
    } else {
        printf("0\n");
    }

    free(nums);

    return 0;
}
