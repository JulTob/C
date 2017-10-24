//Padre crea dos niveles de hijos y imprimen  todos su PID
/*---------------  0
          \------  1
    \------------  1
           \-----  2 */

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>


int main(void){

    int whereami; whereami = 0; //Estoy en el nivel 0

    int do_times;
  for (do_times=0; do_times<3; do_times=do_times+1){

    pid_t child = fork();
      if (child==0) {
        whereami= whereami+1;     //Bajo de nivel?
      }
      else if (child <0){
        fprintf(stderr, "Fork Failed");
      } // Error!
      else {
        wait(NULL);
      }//Wait for your child!

    }//end for

  switch (whereami) {
    case 0:
      printf("%d Luke, I am your father!  \n", getpid());
      break;
    case 1:
      printf("%d I'm a first born \n", getpid());
      break;

    case 2:
      printf("%d I'm a second born \n", getpid());
      break;

    default:
      printf("%d You Incepted too deep. Look 4 DiCaprio. \n", getpid());
      break;


  }


  return 0;
}
