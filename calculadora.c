#include<stdio.h>

int main(void) {
  
  float num1;
  float num2;
  char operador;

  printf("Digite: <número operador número>\n");
  scanf("%f %c %f", &num1, &operador, &num2);

  switch(operador){
    case '+':
      printf("Resultado: %.2f\n", num1+num2);
    break;
    case '*':
      printf("Resultado: %.2f\n", num1*num2);
    break;
    case '-':
      printf("Resultado: %.2f\n", num1-num2);
    break;
    case '/':
      printf("Resultado: %.2f\n", num1/num2);
    break;
    default:
      printf("Operador inválido!\n");
    break;
  }
  
  /*
  if(operador == '+'){
    printf("Resultado: %.2f\n", num1+num2);
  }else if(operador == '*'){
    printf("Resultado: %.2f\n", num1*num2);
  }else if(operador == '-'){
    printf("Resultado: %.2f\n", num1-num2);
  }else if(operador == '/'){
    printf("Resultado: %.2f\n", num1/num2);
  }else{
    printf("Operador inválido!\n");
  }
  */

  return 0;
}
