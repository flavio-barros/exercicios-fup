#include<stdio.h>

struct aluno{
  char nome[81];
  char matricula[21];
  float nota1, nota2, nota3;
};

typedef struct aluno Aluno;

float calcula_media(Aluno* a){
  return (a->nota1 + a->nota2 + a->nota3)/3;
}

void imprime_aprovados(int n, Aluno** alunos){
  float media;
  for(int i=0; i<n; i++){
    media = calcula_media(alunos[i]);
    if(media >= 7){
      printf("Nome: %s\tMatrícula: %s\tMédia: %.2f\n", alunos[i]->nome,
                                                       alunos[i]->matricula,
                                                       media);
    }
  }
}

int main(){
  Aluno a1 = {"aluno1", "001", 9.5f, 9.0f, 10.0f};
  Aluno a2 = {"aluno2", "002", 7.1f, 5.8f, 8.4f};
  Aluno a3 = {"aluno3", "003", 2.0f, 7.5f, 8.9f};
  Aluno a4 = {"aluno4", "004", 5.2f, 7.4f, 3.5f};
  Aluno a5 = {"aluno5", "005", 5.4f, 6.7f, 3.4f};
  Aluno *alunos[5] = {&a1, &a2, &a3, &a4, &a5};

  imprime_aprovados(5, alunos);
  
  return 0;
}