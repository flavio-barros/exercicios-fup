#include<stdio.h>

typedef struct departamento{
  char nome[21];
  int salario_base;
  int carga_horaria;
  int valor_hora_extra;
}Departamento;

typedef struct funcionario{
  char nome[31];
  Departamento* departamento;
  int horas_trabalhadas;
  int salario;
}Funcionario;

int main(){

  return 0;
}