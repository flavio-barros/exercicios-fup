#include<stdio.h>
#include<stdlib.h>

/*
Retorna o inverso da representação binária de num

num:      0 0 1 0 0 0 0 

inverso:  0 0 0 1 0 1 0
          0 0 0 0 0 0 1
          0 0 0 1 0 1 1
*/
unsigned int inverso(unsigned int num){
  unsigned int inverso = 0;
  while(num > 0){
    inverso <<= 1;
    if(num%2 == 1){
      inverso ^= 1;
    }
    num >>= 1;
  }
  return inverso;
}

/*
Checa se a representação binária de num é um palindromo
*/
int palindromo(unsigned int num){
  return num == inverso(num);
}

/*
1 =  0 0 0 1    11 = 1 0 1 1
2 =  0 0 1 0    12 = 1 1 0 0
3 =  0 0 1 1    13 = 1 1 0 1
4 =  0 1 0 0    14 = 1 1 1 0
5 =  0 1 0 1    15 = 1 1 1 1
6 =  0 1 1 0
7 =  0 1 1 1
8 =  1 0 0 0
9 =  1 0 0 1
10 = 1 0 1 0
*/

int main(int argc, char const *argv[]){
  unsigned int n1 = (unsigned int)atoi(argv[1]);
  printf("palindromo: %d\n", palindromo(n1));
  return 0;
}