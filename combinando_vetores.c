#include<stdio.h>

int main(void){

  int v1[] = {-3, 0, 5, 23, 35, 40};
  int v2[] = {-10, 1, 15, 100};

  int tamanho_v1 = sizeof(v1)/sizeof(v1[0]);
  int tamanho_v2 = sizeof(v2)/sizeof(v2[0]);

  int v3[tamanho_v1+tamanho_v2];

  int i1 = 0;
  int i2 = 0;
  int i3 = 0;
  /*
  1: i1 = i2 = i3 = 0
  2: i1 = 0; i2 = 1; i3 = 1
  3: i1 = 1; i2 = 1; i3 = 2
  */

  while(i1 < tamanho_v1 || i2 < tamanho_v2){

    if(v1[i1] < v2[i2]){
      v3[i3] = v1[i1];
      i1++;
    }else{
      v3[i3] = v2[i2];
      i2++;
    }
    
    i3++;
  }

  int i;
  for(i = 0; i < tamanho_v1+tamanho_v2; i++){
    printf("%d\n", v3[i]);
  }
  

  return 0;
}