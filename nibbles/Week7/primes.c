// Write a program to list the first n prime numbers.
#include <stdio.h>
#include <stdlib.h>

#define TRUE 1;
#define FALSE 0;

int isPrime(int x) {
    if (x == 2 || x == 3 || x == 5) {
        return TRUE;
    }

    if (!(x % 2 == 0 || x % 3 == 0 || x % 5 == 0)) {
        return TRUE;
    }

    return FALSE;
}

int main(int argc, char *argv[]) {

    int *pPrimes = NULL;

    // Get n as number of primes needed
    printf("Enter number of primes needed: ");

    int n;
    scanf("%d", &n);

    // Allocate memory to primes
    pPrimes = (int *)malloc(sizeof(int) * n);

    int currPrime = 2;

    for (int i = 0; i < n; i++) {
    }

    return 0;
}
