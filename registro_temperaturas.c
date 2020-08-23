#include<stdio.h>

float fahrenheint_para_celsius(int temperatura);

int main(void){

  int temperaturas[10];

  int i;
  for(i = 0; i < 10; i++){
    printf("Digite a temperatura da cidade %d: ", i+1);
    scanf("%d", &temperaturas[i]);
  }

  int fria = 0;
  int amena = 0;
  int quente = 0;
  float celsius;

  for(i = 0; i < 10; i++){
    celsius = fahrenheint_para_celsius(temperaturas[i]);
    printf("%.1f\n", celsius);
    if(celsius <= 10){
      fria++;
    }else if(celsius <= 30){
      amena++;
    }else{
      quente++;
    }
  }

  printf("Cidades com temperatura fria: %.2f%%\n", (fria*100)/10.0);
  printf("Cidades com temperatura amena: %.2f%%\n", (amena*100)/10.0);
  printf("Cidades com temperatura quente: %.2f%%\n", (quente*100)/10.0);

  return 0;
}

float fahrenheint_para_celsius(int temperatura){
  return (temperatura-32)/1.8f;
}