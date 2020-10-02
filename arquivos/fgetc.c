#include<stdio.h>
#include<stdlib.h>

int main(){

  FILE* arquivo = fopen("teste.txt", "r");

  if(arquivo == NULL){
    printf("Erro na abertura do arquivo\n");
    exit(1);
  }
  
  char c;
  c = fgetc(arquivo);

  while(c != EOF){
    printf("%c\n", c);
    c = fgetc(arquivo);
  }
  

  fclose(arquivo);
  return 0;
}