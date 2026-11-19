#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
  //solution Without Using Pointers
  //char letter = argv[1];
  //char word[strlen(argv[2])];
  //strcpy(word, argv[2]);
  

  //solution Using Pointers
  int count = 0;
  char letter = argv[1][0];
  char *pWord = argv[2];
  
  while(pWord = strchr(pWord, letter)){
    ++count;
    ++pWord;
  }


  // Solution Without Using Pointers
  //char letter = argv[1];
  //char word[strlen(argv[2])];
  //strcpy(word, argv[2]);
   //for (int i = 0; i < strlen(word); i++) {
    //if (word[1]== letter){
      //++count;
    //}

  printf("%d\n", count);
  return 0;
}
