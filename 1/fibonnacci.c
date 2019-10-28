
#include<stdio.h>

int main(
  int argc,
  char*argv[]
){
  int top = 10;
  int fib1 = 0; int fib2 = 1;  int fibt = 0;
  for (int i = 0; i < top; i++) {
    printf( "%d \n",fib1);
    fibt = fib1;
    fib1 = fib2;
    fib2 = fibt+fib2;
  }
  return 0;
}
