#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char* argv[]){

  char ch = argv[1][0];//First argument after program

  char * str = argv[2];
  //atoi(str) === int(str)#python
  
  //Array [a,b,c,b,d,e,b,a]
  //Memory 0 1 2 3 4 5 6 7
  //arr = poin  t at memory 0, go from here
  //[b,c,d,e]
  //*(arr + 1) = [b,c,d,e]


  char *p = strchr(str,ch);
  int count = 0;

  while(p != NULL){
    p = strchr(p+1,ch);

    count++;
  }

  printf("%d\n",count);



  return 0;
}
