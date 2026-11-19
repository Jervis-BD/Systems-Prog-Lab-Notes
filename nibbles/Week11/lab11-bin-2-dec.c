#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function Prototypes
void bin2dec(int *p, int n, int *outP);

int main(int argc, char *argv[]) {
    if (argc > 9) {
        printf("Too many binary digits entered.\n");
        return 0;
    }

    int n = argc - 1;
    int nums[n];
    for (int i = 0; i < n; i++) {
        nums[i] = atoi(argv[i + 1]);
        if (!(strcmp(argv[i + 1], "0") == 0 || strcmp(argv[i + 1], "1") == 0)) {
            printf("Only digits 1 and 0 are permitted.\n");
            return 0;
        }
    }

    int dec;
    bin2dec(nums, n, &dec);

    printf("%d\n", dec);

    return 0;
}

void bin2dec(int *p, int n, int *outP) {

    int binP = 0;
    int out = 0;
    for (int i = 0; i < n; i++) {

        int m = 1;

        for (int j = 0; j < i; j++) {

            m *= 2;
        }
        out += p[n - i - 1] * m;
        binP++;
    }

    *outP = out;
}
