#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  // 0 1 2 3 4
  // pointer to array pointer to array 2

  printf("Argc: %d\n",argc);
  for(int i = 0;i < argc;i++){
    printf("Arg %d: %s\n",i,*(argv + i);
  }

  char* str = argv[1];
  printf("%s\n",str);


}
