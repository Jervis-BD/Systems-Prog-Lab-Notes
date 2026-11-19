#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int m1 = atoi(argv[1]);
    int n1 = atoi(argv[2]);

    // printf("%d %d\n", m1, n1);

    int matrix1[m1][n1];

    int *p1 = matrix1[0];

    int i = 0;
    for (; i < m1 * n1; i++) {
        *(p1 + i) = atoi(argv[i + 3]);
    }

    /*
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }*/

    int m2 = atoi(argv[(m1 * n1) + 3]);
    int n2 = atoi(argv[(m1 * n1) + 4]);

    // printf("%d %d\n", m2, n2);

    int matrix2[m2][n2];

    int *p2 = matrix2[0];

    i += 5;

    int cursor = 0;
    for (; i < argc; i++) {
        *(p2 + cursor) = atoi(argv[i]);
        int curr = atoi(argv[i]);
        // printf("%d\n", curr);
        cursor++;
        // i++;
    }

    /*
    for (int i = 0; i < m2; i++) {
        for (int j = 0; j < n2; j++) {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }
    */

    int out_matrix[m1][n2];

    int *p_out = out_matrix[0];

    for (i = 0; i < m1 * n1; i += m1) {
        int total = 0;
        for (int j = i; j < m1 * j; j++) {
            total += *(p1 + (m1 * i) + j) * *(p2 + (n2 * j) + i);
            printf("%d %d\n", *(p1 + j), *(p2 + (n2 * j) + i));
        }
        // printf("%d\n", total);
        *(p_out + i) = total;
    }

    for (int i = 0; i < m1; i++) {

        for (int j = 0; j < n2; j++) {
            // printf("%d ", out_matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
