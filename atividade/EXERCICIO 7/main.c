/*
Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois números forem iguais, imprima a mensagem Números iguais
*/

#include <stdio.h>

int main(void) {
  int v1,v2,maior;
  printf("Entre com dois valores: \n");
  scanf("%d %d",&v1 ,&v2);
  
  if(v1>v2){
    printf("O maior número: %d \n",v1);
  }else if(v1==v2){
     printf("Números Iguais!\n");
  }else{
     printf("O maior número: %d \n",v2);
  }
  return 0;
}