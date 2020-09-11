#include<stdio.h>

typedef struct aluno{
  char nome[81];
  char matricula[21];
  float notas[5];
  float media;
}Aluno;

float calcula_media(int num_pesos, int* pesos, Aluno* aluno){
  float media = 0;
  int soma_pesos = 0;
  for(int i=0; i<num_pesos; i++){
    media += aluno->notas[i]*pesos[i];
    soma_pesos += pesos[i];
  }
  return media/soma_pesos;
}

void calcular_medias(int num_pesos, int* pesos, int num_alunos, Aluno** alunos){
  for(int i=0; i<num_alunos; i++){
    alunos[i]->media = calcula_media(num_pesos, pesos, alunos[i]);
  }
}

void imprimir_alunos(int num_alunos, Aluno** alunos){
  for(int i=0; i<num_alunos; i++){
    printf("Nome: %s\tMédia: %.2f\n", alunos[i]->nome, alunos[i]->media);
  }
  printf("\n");
}

int main(){
  Aluno a1 = {"aluno1", "001", {6.5, 8.3, 4.2, 7.4, 7.5}};
  Aluno a2 = {"aluno2", "002", {3.5, 10.0, 4.5, 3.2, 6.5}};
  Aluno a3 = {"aluno3", "003", {8.7, 5, 7.8, 9, 8}};
  Aluno a4 = {"aluno4", "004", {4.3, 8.8, 2.2, 9.4, 10}};
  Aluno a5 = {"aluno5", "005", {10, 8, 6, 4, 3}};
  Aluno *alunos[5] = {&a1, &a2, &a3, &a4, &a5};

  int pesos[5] = {1, 1, 1, 1, 1};

  imprimir_alunos(5, alunos);
  calcular_medias(5, pesos, 5, alunos);
  imprimir_alunos(5, alunos);

  return 0;
}