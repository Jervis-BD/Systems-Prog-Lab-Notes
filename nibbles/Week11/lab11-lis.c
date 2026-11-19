#include <stdio.h>
#include <stdlib.h>

int lis(int *p, int n);

int main(int argc, char *argv[]) {
    //
    int n = argc - 1;
    int seq[n];
    for (int i = 0; i < n; i++) {
        seq[i] = atoi(argv[i + 1]);
    }

    int longest = lis(seq, n);

    printf("%d\n", longest);

    return 0;
}

int lis(int *p, int n) {
    //
    int start = 0;
    int longest = 1;
    while (start < n) {

        int *curr_arr = calloc(n, sizeof(int));
        int len = 1;
        curr_arr[0] = p[start];

        int j = 1;
        for (int i = start + 1; i <= n; i++) {
            if (p[i] > curr_arr[j - 1]) {
                curr_arr[j] = p[i];
                len++;
                j++;
            }
        }

        /*
        for (int i = 0; i < len; i++) {

            printf("%d ", curr_arr[i]);
        }
        printf("\n");
        */

        if (len > longest) {
            longest = len;
        }

        start++;
    }

    return longest;
}
