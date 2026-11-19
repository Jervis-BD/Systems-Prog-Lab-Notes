#include <stdio.h>
#include <stdlib.h>

int maxSum(int *p, int n);

int main(int argc, char *argv[]) {

    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(n);

    printf("%d\n", n);

    int max = maxSum(arr, n);
    printf("%d\n", max);

    return 0;
}

int maxSum(int *p, int n) {

    int max = 0;

    int i = 0;
    int *curr_arr = malloc(sizeof(int));

    int curr_len = 1;

    while (i <= n) {

        curr_arr = realloc(curr_arr, curr_len * sizeof(int));

        curr_arr[curr_len - 1] = p[i + curr_len - 1];

        int sum = 0;
        for (int i = 0; i < curr_len; i++) {
            sum += curr_arr[i];
        }
        if (sum > max) {
            max = sum;
        }

        printf("Start: %d End: %d Sum: %d\n", curr_arr[0],
               curr_arr[curr_len - 1], sum);

        curr_len++;

        if (curr_len == n - i - 1) {
            curr_arr = calloc(1, sizeof(int));
            curr_len = 1;
            i++;
        }
    }

    return max;
}
