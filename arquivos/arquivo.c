#include<stdio.h>
#include<stdlib.h>

int main(){

  FILE* arquivo = fopen("teste.txt", "r+");

  if(arquivo == NULL){
    printf("Erro na abertura do arquivo\n");
    exit(1);
  }

  fclose(arquivo);
  return 0;
}