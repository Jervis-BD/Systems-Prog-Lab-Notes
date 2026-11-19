#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int start = atoi(argv[1]);
    int end = atoi(argv[2]);

    int curr = start;

    while (curr < end + 1) {
        if (curr % 400 == 0 || (curr % 4 == 0 && curr % 100 != 0)) {
            printf("%d\n", curr);
        }
        curr++;
    }

    return 0;
}
