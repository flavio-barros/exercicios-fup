#include<stdio.h>

unsigned int multiplicar_potencia2(unsigned int n, int m){
  return n << m;
}

unsigned int dividir_potencia2(unsigned int n, int m){
  return n >> m;
}

int main(){
  printf("Resultado %u / %d^2: %u\n", 40u, 1, dividir_potencia2(40u, 1));
  printf("Resultado %u / %d^2: %u\n", 40u, 2, dividir_potencia2(40u, 2));
  printf("Resultado %u / %d^2: %u\n", 40u, 3, dividir_potencia2(40u, 3));
  printf("Resultado %u / %d^2: %u\n", 40u, 4, dividir_potencia2(40u, 4));
  printf("Resultado %u / %d^2: %u\n", 40u, 5, dividir_potencia2(40u, 5));
  return 0;
}
