#include <stdio.h>
#include <stdlib.h>

unsigned long long fibonacci(int n);

int main(int argc, char *argv[]) {

    int n = atoi(argv[1]);
    printf("The %dth Fibonacci Number: %d\n", n, fibonacci(n));

    return 0;
}

unsigned long long fibonacci(int n) {
    int fib[n + 2];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    return fib[n];
}
