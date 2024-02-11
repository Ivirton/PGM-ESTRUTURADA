/*
Faça um programa que peça ao usuário para digitar 10 valores e some- os
*/
#include <stdio.h>

int main(void) {
  int nun = 0, resultado  = 0;
  for(int c  = 0; c<9; c++){
    printf("digite %d° valor:",c+1);
    scanf("%d",&nun);
    resultado = resultado +nun;
  }
   
  
  printf("resultado: %d",resultado);
  return 0;
}