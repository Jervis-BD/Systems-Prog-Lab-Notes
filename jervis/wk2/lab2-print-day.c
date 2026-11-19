#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int day = atoi(argv[1]);
  char days[7][9] = {"Sunday","Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
  printf("%s\n", days[day - 1]);
  return 0;
}
