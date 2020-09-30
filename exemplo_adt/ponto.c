#include<stdlib.h>
#include<math.h>
#include"ponto.h"

struct ponto{
  float x;
  float y;
};

Ponto* ponto_criar(float x, float y){
  Ponto* p = (Ponto*)malloc(sizeof(Ponto));
  p->x = x;
  p->y = y;

  return p;
}

void ponto_liberar(Ponto* p){
  free(p);
}

void ponto_acessar(Ponto* p, float* x, float* y){
  *x = p->x;
  *y = p->y;
}

void ponto_atribuir(Ponto* p, float x, float y){
  p->x = x;
  p->y = y;
}

float ponto_calcular_distancia(Ponto* p1, Ponto* p2){
  float dx = p1->x - p2->x;
  float dy = p1->y - p2->y;

  return sqrt(dx*dx + dy*dy);
}