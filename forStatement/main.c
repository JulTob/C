#include <stdio.h>
int main(void){
  int n, triangularNumber;
  triangularNumber = 0;
  // Calcula el numero triangular
  // /(1+2+3+4...+...)
  // de orden n
  
  // for(initialization; conditioner; looper)
  for(n=1; n<=200; n=n+1)
    triangularNumber = triangularNumber + n;
  printf("The 200th triangular number is ");
  printf("%i \n", triangularNumber);
  return 0;
  }
