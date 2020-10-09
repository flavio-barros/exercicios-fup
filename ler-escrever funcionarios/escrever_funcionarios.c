#include<stdio.h>

int main(){

  FILE* arquivo = fopen("funcionarios.txt", "a");

  char opcao;

  char nome[100];
  int salario, depedentes;
  
  do{
    printf("Digite a opção\n1 - Cadastrar funcionário\n2 - Sair\n");
    scanf("%c", &opcao);

    if(opcao == '1'){
      printf("Digite o nome:\n");
      scanf("%s", nome);
      printf("Digite o salário:\n");
      scanf("%d", &salario);
      printf("Digite o número de dependentes:\n");
      scanf("%d", &depedentes);

      fprintf(arquivo, "\n%s %d %d", nome, salario, depedentes);
    }
  }while(opcao != '2');

  fclose(arquivo);

  return 0;
}