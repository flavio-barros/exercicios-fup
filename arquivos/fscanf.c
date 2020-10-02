#include<stdio.h>
#include<stdlib.h>

int main(){

  FILE* arquivo = fopen("teste.txt", "r");

  if(arquivo == NULL){
    printf("Erro na abertura do arquivo\n");
    exit(1);
  }
  /*
  char c;

  while(fscanf(arquivo, "%c", &c) != EOF){
    printf("%c\n", c);
  }
  */

  char string[20];

  while(fscanf(arquivo, "%s", string) != EOF){
    printf("%s\n", string);
  }

  fclose(arquivo);
  return 0;
}