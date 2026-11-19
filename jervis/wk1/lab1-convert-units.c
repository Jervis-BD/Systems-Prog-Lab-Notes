#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    int cm = atoi(argv[1]);
    float inch = cm / 2.54;
    printf("%.2f\n", inch);
    return 0;
}
