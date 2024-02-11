/*
2 - Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos
*/

#include <stdio.h>

int main(void) {
  
  int indice = 6, valores[indice];
 
  for(int c = 0; c<indice;c++){
     printf("Digite um valor:");
     scanf("%d",&valores[c]);
  }
  for(int c = 0; c<indice;c++){
    printf("%d \n",valores[c]);
  }
  return 0;
}