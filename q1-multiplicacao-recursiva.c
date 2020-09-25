#include<stdio.h>

int multiplicar(int a, int b){
  printf("%d, %d\n", a, b);
  if(a < b) return multiplicar(b, a);
  else if(b != 0) return multiplicar(a, b-1) + a;
  else return 0;
}

int main(){

  int a = 3;
  int b = 4;
  printf("multiplicar(%d, %d) = %d\n", a, b, multiplicar(a, b));

  return 0;
}