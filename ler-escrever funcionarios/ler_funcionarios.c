#include<stdio.h>
#include<stdlib.h>

typedef struct{
  char nome[100];
  int salario;
  int dependentes;
}Funcionario;

int contar_linhas(FILE* arquivo){
  int num_linhas = 0;
  char linha[100];

  while(fgets(linha, sizeof(linha), arquivo) != NULL){
    num_linhas++;
  }
  rewind(arquivo);
  return num_linhas;
}

int main(){

  FILE* arquivo = fopen("funcionarios.txt", "r");
  int num_linhas = contar_linhas(arquivo);
  Funcionario** funcionarios = malloc(num_linhas * sizeof(Funcionario*));

  char linha[100];

  for(int i=0; i<num_linhas; i++){
    fgets(linha, sizeof(linha), arquivo);
    Funcionario* funcionario = (Funcionario*) malloc(sizeof(Funcionario));

    sscanf(linha, "%s %d %d", funcionario->nome, &funcionario->salario, &funcionario->dependentes);

    funcionarios[i] = funcionario;
  }

  for(int i=0; i<num_linhas; i++){
    printf("Nome: %s, Salário: %d, Dependentes: %d\n",  funcionarios[i]->nome,
                                                        funcionarios[i]->salario,
                                                        funcionarios[i]->dependentes);
  }

  fclose(arquivo);
  return 0;
}