#include<stdio.h>

int fibonacci(int n){
  if(n == 0) return 0;
  else if(n == 1) return 1;
  else return fibonacci(n-1) + fibonacci(n-2);
}

int main(){

  printf("fibonacci(%d) = %d\n", 7, fibonacci(7));
  return 0;
}
