#include <stdio.h>
#include <stdlib.h>


int main(int argv, char * argc[])
{
    int tri = atoi(argc[1]);
    int con = atoi(argc[2]);
    int pen = atoi(argc[3]);
    int drp = atoi(argc[4]);

    int points = 0;

    points += tri * 5;
    points += con * 2;
    points += pen * 3;
    points += drp * 3;

    printf("%i\n", points);
    return 0;
}

