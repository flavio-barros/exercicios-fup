#include<stdio.h>

char negrito = 1<<0;      // 0 0 0 0 0 0 0 1
char italico = 1<<1;      // 0 0 0 0 0 0 1 0
char sublinhado = 1<<2;   // 0 0 0 0 0 1 0 0
char tachado = 1<<3;      // 0 0 0 0 1 0 0 0
char sobrescrito = 1<<4;  // 0 0 0 1 0 0 0 0
char subscrito = 1<<5;    // 0 0 1 0 0 0 0 0

char valor_propriedades[6] = {1<<0, 1<<1, 1<<2, 1<<3, 1<<4, 1<<5};
char *nomes_propriedades[6] = {"negrito", "italico", "sublinhado", "tachado", "sobrescrito", "subscrito"};
// 0 = 0 0 0 0 0 0 0 0
// 1 = 0 0 0 0 0 0 0 1
// 2 = 0 0 0 0 0 0 1 0
// 3 = 0 0 0 0 0 0 1 1
// ...
// 7 = 0 0 0 0 0 1 1 1

void imprimir_propriedades(char c){
  if(c == 0){
    printf("caractere não possui propriedades\n");
  }else{
    printf("Propriedades do caractere: :");
    for(int i=0; i<6; i++){
      if(c%2 == 1){
        printf("| %s |", nomes_propriedades[i]);
      }
      c >>= 1; // c = c >> 1
    }
    printf("\n");
  }
}

/*
  1 - negrito
  2 - italico
  ...
  3 - subscrito

  propriedades:   0 0 0 0 0 1 0 1 (negrito, sublinhado)
  tachado:        0 0 0 0 1 0 0 0 (tachado)
  resultado:      0 0 0 0 0 1 0 1 (negrito, sublinhado, tachado)
*/
char adicionar_propriedade(char propriedades, int indice_propriedade){
  return propriedades|valor_propriedades[indice_propriedade-1];
}

/*
  propriedades:   0 0 0 1 0 1 1 0 (italico, sublinhado, sobrescrito)
  sobrescrito:(~) 1 1 1 1 0 1 1 1 (sobrescrito)
  resultado:      0 0 0 0 0 1 1 0 (italico, sublinhado)
*/
char remover_propriedade(char propriedades, int indice_propriedade){
  return propriedades&~(valor_propriedades[indice_propriedade-1]);
}

int main(){
  char c = 0;
  c = adicionar_propriedade(c, 1);
  c = adicionar_propriedade(c, 4);
  imprimir_propriedades(c);
  c = remover_propriedade(c, 2);
  imprimir_propriedades(c);
  return 0;
}