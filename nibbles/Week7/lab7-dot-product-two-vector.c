#include <stdio.h>
#include <stdlib.h>

// Function to return dot product given pointers to two vectors and their size
int dot_product(int *v1, int *v2, int vecSize) {
    int output = 0;

    for (int i = 0; i < vecSize; i++) {
        output += *(v1 + i) * *(v2 + i);
    }

    return output;
}

int main(int argc, char *argv[]) {

    // Get size of both vectors from first argument
    int vecSize = atoi(argv[1]);

    // Allocate memory to pointers for both vectors
    int *pVec1 = (int *)calloc(vecSize, sizeof(int));
    int *pVec2 = (int *)calloc(vecSize, sizeof(int));

    // Assign values from args to each vector
    for (int i = 0; i < vecSize; i++) {
        *(pVec1 + i) = atoi(argv[i + 2]);
        *(pVec2 + i) = atoi(argv[i + 2 + vecSize]);
    }

    // Calculate the dot product of two vectors
    int dot = dot_product(pVec1, pVec2, vecSize);

    printf("%d\n", dot);

    return 0;
}
