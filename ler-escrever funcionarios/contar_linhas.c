#include<stdio.h>

int contar_linhas_c(FILE* arquivo){
  int num_linhas = 0;
  char c = fgetc(arquivo);

  while(c != EOF){
    if(c == '\n') num_linhas++;
    c = fgetc(arquivo);
  }
  return num_linhas;
}

int contar_linhas_s(FILE* arquivo){
  int num_linhas = 0;
  char linha[100];

  while(fgets(linha, sizeof(linha), arquivo) != NULL){
    num_linhas++;
  }
  return num_linhas;
}

int main(){

  FILE* arquivo = fopen("1661-0.txt", "r");

  printf("Total linhas(1): %d\n", contar_linhas_c(arquivo));
  rewind(arquivo);
  printf("Total linhas(2): %d\n", contar_linhas_s(arquivo));
  
  fclose(arquivo);

  return 0;
}