/*
Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da semana correspondente e este numero. insto é domingo se 1 segunda se 2 e assim por diante.
*/

#include <stdio.h>

int main(void) {
  int op;
  printf("Entre com um valor ");
  scanf("%d",&op);

  switch(op){

    case 1:
        printf("Domingo");
    break;
    case 2:
        printf("Segunda-Feira");
    break;
    case 3:
      printf("Terça-Feira");
    break;
    case 4:
      printf("Quarta-Feira");
    break;
    case 5:
     printf("Quinta-Feira");
    break;
    case 6:
   printf("Sexta-Feira");
    break;
    case 7:
   printf("Sábado");
    break;
    
  }
  return 0;
}