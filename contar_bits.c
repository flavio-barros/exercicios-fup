#include<stdio.h>
#include<stdlib.h>

/*
Retorna a quantidade de bits 1 da representação binária de num

0 0 1 0 1 1
0 0 0 1 0 1
*/
int quantidade_bits_1(unsigned int num){
  //Inicio código
  int contador = 0;
  for(int i=0; i < sizeof(num)*8; i++){
    if(num%2 == 1){
      contador++;
    }
    num >>= 1;
  }
  return contador;
  //Fim código
}

/*
Retorna a quantidade de números no intervalo de 1 a num que possuem exatamente
3 bits iguais a 1 em sua representação binária. 
*/
int num_3_bits_1(unsigned int num){
  //Inicio código
  int contador = 0;
  for(int i=1; i <= num; i++){
    if(quantidade_bits_1(i) == 3){
      contador++;
    }
  }
  return contador;
  //Fim código
  
}

/*
1 =  0 0 0 0 1    11 = 0 1 0 1 1
2 =  0 0 0 1 0    12 = 0 1 1 0 0
3 =  0 0 0 1 1    13 = 0 1 1 0 1
4 =  0 0 1 0 0    14 = 0 1 1 1 0
5 =  0 0 1 0 1    15 = 0 1 1 1 1
6 =  0 0 1 1 0
7 =  0 0 1 1 1
8 =  0 1 0 0 0
9 =  0 1 0 0 1
10 = 0 1 0 1 0
*/

int main(int argc, char const *argv[]){
  unsigned int num = (unsigned int)atoi(argv[1]);
  printf("num_3_bits_1(%d) = %d\n", num, num_3_bits_1(num));
  return 0;
}