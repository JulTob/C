
#include <string.h>
#include <stdio.h>


int main(
  int argc,
  char *argv[]
){
  int sizeof_result = 1;

  for (int i = 1; i < argc; i++) {
    sizeof_result += strlen(argv[i]+1);
  }

 char result[sizeof_result];

 for (int i = 1; i < argc; i++) {
   strcat(result,argv[i]);
 }
 printf("%s\n",result);
 return 0;
}


//gcc test.c -o test;./test
