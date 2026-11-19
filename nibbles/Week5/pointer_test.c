#include <stdio.h>

void swap_with_pointer(int *a, int *b);

int main(int argc, char *argv[]) {
    int num1 = 5;
    int num2 = 6;

    /*int *pNum1 =
    int *pNum2 = 0;

*/
    int n = 3;
    int a[3] = {10, 30, 20};

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    swap_with_pointer(a + 1, a + 2);

    for (int i = 0; i < 3; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

void swap_with_pointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
