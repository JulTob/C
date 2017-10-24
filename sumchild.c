#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int SummerChild(int num1, int num2); //Child process to Sum


int main(void){
  int result;
  pid_t child = fork();
  if (child==0) {
    result= SummerChild(2,3);     //Bajo de nivel?
      printf("%d\n",result );
  }
  else if (child <0){
    fprintf(stderr, "Fork Failed");
  } // Error!
  else {
    wait(NULL);
  }//Wait for your child!


  exit(0);

return 0;
}

int SummerChild(int num1, int num2){

  return (num1+num2);
  exit(0);
}
