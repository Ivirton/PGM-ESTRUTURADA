/*
crie um programa que le 6 valores inteiros e em seguida mostre na tela os valores lidos na ordem inversa
*/

#include <stdio.h>
int main(void) {
 int size = 6; 
  int vetor[size]; 

  for(int c = 0; c<=size; c++){
    printf("Digite %d° valor:",c+1);
    scanf("%d",&vetor[c]);
  }

  for(int i = size; i>0;i--){
   
    printf("[%d] = %d \n",i,vetor[i]);
  }
  

}