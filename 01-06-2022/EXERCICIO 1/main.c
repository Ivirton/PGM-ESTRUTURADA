#include <stdio.h>
/*
Faça um programa que possua um vetor denominado A que armazene 6 números inteiros. O programa deve executar os seguintes passos:
 - Atribua os seguintes valores a esse vetor: 1,0,5, 2, -5, 7.
 - Armazene em uma variável inteira (simples) a soma entre os valores das posições A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
 - Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
 - Mostre na tela cada valor do vetor A, um em cada linha
*/
int main(void) {
  int p = 6;
  int a[p],soma = 0 ;

  a[0] = 1;
  a[1] = 0;
  a[2] = 5;
  a[3] = 2;
  a[4] = -5;
  a[5] = 7;
  soma = a[0] + a[1] + a[5];
  printf(" a soma: de A[0]+A[1]+A[5] = %d \n",soma);
  a[4] = 100;
  for(int c = 0; c<p;c++){
    printf("A[%d] = %d \n",c,a[c]);
  }
  
  return 0;
}