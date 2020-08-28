#include<stdio.h>

void imprime_maior_linha(int l, int c, int matriz[l][c]){
  for(int i = 0; i < l; i++){
    int maior = matriz[i][0];
    for(int j = 1; j < c; j++){
      if(matriz[i][j] > maior){
        maior = matriz[i][j];
      }
    }
    printf("Maior elemento da linha %d: %d\n", i, maior);
  }
}


int main(int argc, char const *argv[]){

  int m1[3][3] = {{5, 3, -2}, {0, -5, 10}, {3, 9, -2}};
  imprime_maior_linha(3, 3, m1);

  return 0;
}
