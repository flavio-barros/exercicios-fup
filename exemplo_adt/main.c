#include<stdio.h>
#include"ponto.h"

int main(){

  Ponto* p1 = ponto_criar(4.3, 2.2);
  Ponto* p2 = ponto_criar(2.1, 7.8);

  float distancia = ponto_calcular_distancia(p1, p2);

  printf("Distância: %.2f\n", distancia);

  ponto_atribuir(p2, 6.3, 18.7);

  distancia = ponto_calcular_distancia(p1, p2);

  printf("Distância: %.2f\n", distancia);

  ponto_liberar(p1);
  ponto_liberar(p2);

  return 0;
}