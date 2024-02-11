/*
1- Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares.
*/

#include <stdio.h>
int nun = 0;
int main(void) {
  printf("Digite um número:");
  scanf("%d",&nun);
  
  for(int c = 1; c<=nun; c+=2 ){
    printf("%d \n",c);
  }
  return 0;
}