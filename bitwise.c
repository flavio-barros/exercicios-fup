#include<stdio.h>

int main(){

  unsigned int a = 12, b = 9;

  printf("Resultado AND: %u\n", a&b);
  printf("Resultado OR: %u\n", a|b);
  printf("Resultado XOR: %u\n", a^b);
  printf("Resultado NOT: %u\n", ~4294967295u);

  printf("Resultado << 1: %u\n", 1<<1);
  printf("Resultado << 2: %u\n", 1<<2);
  printf("Resultado << 3: %u\n", 1<<3);
  printf("Resultado << 4: %u\n", 1<<4);

  printf("Resultado >> 1: %u\n", 11>>1);
  printf("Resultado >> 2: %u\n", 11>>2);
  printf("Resultado >> 3: %u\n", 11>>3);
  printf("Resultado >> 4: %u\n", 11>>4);

  return 0;
}