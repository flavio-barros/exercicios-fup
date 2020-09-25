#include<stdio.h>

void imprimir(char* string){
  if(string[0] == '\0') return;
  else{
    imprimir(&string[1]);
    printf("%c", string[0]);
  }
}

int tamanho(char* string){
  if(string[0] == '\0') return 0;
  else return tamanho(&string[1]) + 1;
}

int main(){
  char string[] = "Recursividade";
  printf("tamanho(%s) = %d\n", string, tamanho(string));
  imprimir(string);
  printf("\n");
  return 0;;
}