#include <stdio.h>
/* Faça um função que receba um vetor de inteiros e retorne quantos valores 
pares ele possui.*/

void par(int valores[]){
  int n = 0;

  for(int c = 0;c<6;c++){
    if(valores[c]%2 == 0){
      n++;
    }
  }
  printf("%d números pares",n);
}

int main(void) {
  int vetor[6] = {1,1,4,6,5,2};
  
  par(vetor);
  
  return 0;
}