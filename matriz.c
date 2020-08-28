#include<stdio.h>
#include<stdlib.h>

void imprimir_matriz(int linhas, int colunas, int matriz[linhas][colunas]){
  for(int i = 0; i < linhas; i++){
    for(int j = 0; j < colunas; j++){
      printf("%d\t", matriz[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

void maior_elemento_linha(int linhas, int colunas, int matriz[linhas][colunas]){

  for(int i = 0; i < linhas; i++){
    int maior = matriz[i][0];
    for(int j = 1; j < colunas; j++){
      if(matriz[i][j] > maior){
        maior = matriz[i][j];
      }
    }
    printf("Maior elemento da linha %d: %d\n", i, maior);
  }
}

void maior_elemento_coluna(int linhas, int colunas, int matriz[linhas][colunas]){

  for(int i = 0; i < colunas; i++){
    int maior = matriz[0][i];
    for(int j = 1; j < linhas; j++){
      if(matriz[j][i] > maior){
        maior = matriz[j][i];
      }
    }
    printf("Maior elemento da coluna %d: %d\n", i, maior);
  }
}

void somar_matrizes(int l, int c, int matriz1[l][c], int matriz2[l][c], int matriz3[l][c]){
  for(int i=0; i<l; i++){
    for(int j=0; j<c; j++){
      matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
    }
  }
}

int main(int argc, char const *argv[]){
  int matriz1[3][3] = {{2,24,12}, {-2, 65, 21}, {2,4,6}};
  int matriz2[3][3] = {{3,5,2}, {-1, 7,3}, {4,5,3}};
  int matriz3[3][3];

  imprimir_matriz(3, 3, matriz1);
  imprimir_matriz(3, 3, matriz2);
  somar_matrizes(3, 3, matriz1, matriz2, matriz3);
  imprimir_matriz(3, 3, matriz3);
  // maior_elemento_linha(3, 3, matriz1);
  // maior_elemento_coluna(3, 3, matriz1);
  return 0;
}