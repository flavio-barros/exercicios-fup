#include<stdio.h>

char negrito = 1<<0;      // 0 0 0 0 0 0 0 1
char italico = 1<<1;      // 0 0 0 0 0 0 1 0
char sublinhado = 1<<2;   // 0 0 0 0 0 1 0 0
char tachado = 1<<3;      // 0 0 0 0 1 0 0 0
char sobrescrito = 1<<4;  // 0 0 0 1 0 0 0 0
char subscrito = 1<<5;    // 0 0 1 0 0 0 0 0

char *propriedades[6] = {"negrito", "italico", "sublinhado", "tachado", "sobrescrito", "subscrito"};
// 0 = 0 0 0 0 0 0 0 0
// 1 = 0 0 0 0 0 0 0 1
// 2 = 0 0 0 0 0 0 1 0
// 3 = 0 0 0 0 0 0 1 1

// 7 = 0 0 0 0 0 1 1 1

void imprimir_propriedades(char c){
  if(c == 0){
    printf("caractere não possui propriedades\n");
  }else{
    printf("Propriedades do caractere: :");
    for(int i=0; i<6; i++){
      if(c%2 == 1){
        printf("| %s |", propriedades[i]);
      }
      c >>= 1; // c = c >> 1
      printf("\n");
    }
  }
}

int main(){
  imprimir_propriedades(7);
  return 0;
}