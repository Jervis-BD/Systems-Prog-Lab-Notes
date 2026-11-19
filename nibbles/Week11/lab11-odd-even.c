#include <stdio.h>
#include <stdlib.h>

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

int main(int arc, char *argv[]) {

    //
    int num = atoi(argv[1]);
    int b = 2;

    // int x = num & b;
    int x = num & 1;
    if (x) {
        printf("Odd\n");
    } else {
        printf("Even\n");
    }

    return 0;
}
