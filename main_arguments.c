#include<stdio.h>

int main(int argc, char *argv[]){

  printf("Foram passados %d argumentos para a função main\n", argc);
  for(int i = 0; i < argc; i++){
    printf("Argumento %d: %s\n", i, argv[i]);
  }
  return 0;
  
}
