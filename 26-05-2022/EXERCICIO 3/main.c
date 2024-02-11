/*
 3-Faça um programa que leia um número inteiro positivo par N e imprima todos os números pares de 0 até N em ordem crescente 
  */

#include <stdio.h>

int nun = 0;
int main(void) {
  printf("Digite um número:");
  scanf("%d",&nun);
  if(nun>0 && nun%2 == 0){
    for(int c = 0; c<= nun; c+=2){
    printf("%d \n",c);
     }
  }else{
    printf("digite somente números pares!");
  }
  
  
}