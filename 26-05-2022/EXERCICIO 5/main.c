/*
5-Escreva um algoritmo que leia um número inteiro entre 100 e 999 e imprima na saída cada um dos algarismos que compõem o número
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
int main(void) {
 int n,n1,n2,n3;
  n = 0;
  while(n<100 || n> 999){
    printf("digite um valor > 100 e < 999: ");
    scanf("%d",&n); 
 }
   n3 = (n%10);
   n2 = (((n%100) - n3)/10)*10;
   n1 = (n/100)*100;
   
  printf("\n");
  printf("Centenas %d\n",n1);
  printf("Dezenas  %d\n",n2);
  printf("Unidades %d\n",n3);

  
  return 0;
}