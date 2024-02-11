/*
faça u programa que receba do usuario um vetor com 10 posiçoes em seguida devera ser impresso o maior e o menor elemento do vetor
*/
#include <stdio.h>

int main(void) {
  int size = 3; 
  int vetor[size],maior = 0,menor = 0; 

  for(int c = 0; c<size; c++){
    printf("Digite %d° valor:",c+1);
    scanf("%d",&vetor[c]);

    if(maior < vetor[c]  ){
      maior = vetor[c];
      
    }else {
      menor = vetor[c];
    }
  }
  printf("Menor:%d \n Maior:%d",menor,maior);
  
  return 0;
}