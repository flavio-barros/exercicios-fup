#include<stdio.h>
#include<stdlib.h>

int main(){

  FILE* arquivo = fopen("teste.txt", "a");

  if(arquivo == NULL){
    printf("Erro na abertura do arquivo\n");
    exit(1);
  }
  
  int bytes;
  bytes = fprintf(arquivo, "Linha de teste");

  if(bytes == EOF){
    printf("Erro na escrita no arquivo\n");
  }else{
    printf("%d bytes escritos no arquivo\n", bytes);
  }

  fclose(arquivo);
  return 0;
}