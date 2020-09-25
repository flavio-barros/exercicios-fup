#include<stdio.h>

void imprimir_binario(int num){
  printf("imprimir_binario(%d)\n", num);
  if(num == 0){
    return;
  }else{
    imprimir_binario(num/2); // 1/2 = 0
    printf("%d", num%2);
  }
}

int main(){

  imprimir_binario(47);
  printf("\n");

  return 0;
}