#include <stdio.h>
#include <stdlib.h>

void assign_vals(float *p, int size, char *argv[]) {
    for (int i = 0; i < size; i++) {
        p[i] = atof(argv[i + 1]);
    }
}

int main(int argc, char *argv[]) {
    //
    float *nums = calloc(argc - 1, sizeof(float));
    assign_vals(nums, argc - 1, argv);

    float largest;
    float second;
    if (nums[0] > nums[1]) {
        largest = nums[0];
        second = nums[1];
    } else {
        largest = nums[1];
        second = nums[0];
    }

    for (int i = 2; i < argc - 1; i++) {
        if (nums[i] > largest) {
            second = largest;
            largest = nums[i];
        }
        if (nums[i] > second && nums[i] < largest) {
            second = nums[i];
        }
    }
    printf("%.1f\n", second);

    free(nums);

    return 0;
}
