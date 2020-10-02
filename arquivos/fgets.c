#include<stdio.h>
#include<stdlib.h>

int main(){

  FILE* arquivo = fopen("teste.txt", "r");

  if(arquivo == NULL){
    printf("Erro na abertura do arquivo\n");
    exit(1);
  }
  
  char string[101];

  while(fgets(string, 100, arquivo) != NULL){
    printf("%s", string);
  }

  fclose(arquivo);
  return 0;
}