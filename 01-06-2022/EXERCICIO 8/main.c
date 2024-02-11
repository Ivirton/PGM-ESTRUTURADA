/*
8-Leia um vetor com 20 números inteiros. Escreva os elementos do vetor eliminando elementos repetidos.
*/
#include <stdio.h>
#include <stdbool.h>
int main(void) {
 int vetor[20] = {2,5,2,3,5,3,4,9,88,3,2,2,4,2,3,4,5,2,4,5};
  for(int i1 = 0;i1<20;i1++){
    bool repetido = false; //toda vez que  volta recebe false
    for(int j2 = 0; j2<i1;j2++){
      if(vetor[i1] == vetor[j2]) repetido = true; 
    }  
    if(repetido == false){ 
      // False: se não houver n° repetido
      // True: se houver n° repetido
      printf("%d\n",vetor[i1]);
    } 
  }
}