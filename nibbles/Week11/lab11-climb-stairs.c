#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n);

int main(int argc, char *argv[]) {
    //
    int n = atoi(argv[1]);

    int out = fibonacci(n);

    printf("%d\n", out);

    return 0;
}

int fibonacci(int n) {
    if (n < 2) {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}
