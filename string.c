#include<stdio.h>

int tamanho(char texto[]);
int caixa_baixa(char c);
int caixa_alta(char c);
int conta_caixa_baixa(char texto[]);
int conta_caixa_alta(char texto[]);
char para_caixa_baixa(char c);
char para_caixa_alta(char c);
void string_caixa_baixa(char texto[]);
void string_caixa_alta(char texto[]);
int conta_palavras(char texto[]);
void capitalizar(char texto[]);

/*
A - 65
Z - 90
a - 97
z - 122
*/


int main(void){

  char texto[81];
  printf("Digite um texto: ");
  scanf(" %80[^\n]", texto);

  printf("Tamanho do texto: %d\n", tamanho(texto));
  printf("Quantidade de letras em caixa alta: %d\n", conta_caixa_alta(texto));
  printf("Quantidade de letras em caixa baixa: %d\n", conta_caixa_baixa(texto));
  printf("Quantidade de palavras: %d\n", conta_palavras(texto));
  
  capitalizar(texto);
  printf("Texto capitalizado: %s\n", texto);

  return 0;
}

int tamanho(char texto[]){
  int tamanho = 0;
  for(int i=0; texto[i] != '\0'; i++){
    tamanho++;
  }
  return tamanho;
}

int caixa_baixa(char c){
  if(c >= 'a' && c <= 'z'){
    return 1;
  }
  return 0;
}

int caixa_alta(char c){
  if(c >= 'A' && c <= 'Z'){
    return 1;
  }
  return 0;
}

int conta_caixa_alta(char texto[]){
  int contador = 0;
  for(int i=0; i < tamanho(texto); i++){
    if(caixa_alta(texto[i])){
      contador++;
    }
  }
  return contador;
}

int conta_caixa_baixa(char texto[]){
  int contador = 0;
  for(int i=0; i < tamanho(texto); i++){
    if(caixa_baixa(texto[i])){
      contador++;
    }
  }
  return contador;
}

char para_caixa_baixa(char c){
  if(caixa_alta(c)){
    return c-'A'+'a';
  }
  return c;
}

char para_caixa_alta(char c){
  if(caixa_baixa(c)){
    return c-'a'+'A';
  }
  return c;
}

void string_caixa_baixa(char texto[]){
  for(int i=0; i < tamanho(texto); i++){
    texto[i] = para_caixa_baixa(texto[i]);
  }
}

void string_caixa_alta(char texto[]){
  for(int i=0; i < tamanho(texto); i++){
    texto[i] = para_caixa_alta(texto[i]);
  }
}

int conta_palavras(char texto[]){
  int contador = 1;
  for(int i=0; i < tamanho(texto); i++){
    if(texto[i] == ' ' && texto[i+1] != ' '){
      contador++;
    }
  }
  return contador;
}

void capitalizar(char texto[]){
  for(int i=0; i < tamanho(texto); i++){
    if(i == 0 && caixa_baixa(texto[i])){
      texto[i] = para_caixa_alta(texto[i]);
    }else if(texto[i] == ' ' && caixa_baixa(texto[i+1])){
      ++i;
      texto[i] = para_caixa_alta(texto[i]);
    }else if(texto[i-1] != ' ' && caixa_alta(texto[i])){
      texto[i] = para_caixa_baixa(texto[i]);
    }
  }
}