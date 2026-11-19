#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int num1, num2, result;

    for (int i = 0; i < argc; i++) {

        printf("%s\n", argv[i]);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    result = num1 + num2;

    printf("Result is: %d\n", result);

    if (result > 0) {
        printf("Positive\n");
    } else {
        printf("Negative\n");
    }

    return 0;
}
