/*
Usando o Switch case escreva um programa que leia um inteiro entre 1 e 12 e imprima 
o mes correspondente a este numero assim por diante
*/

#include <stdio.h>

int main(void) {

  int number ;
  printf("Entre com um número correspondente \n > ");
  scanf("%d",&number);

  switch(number){
    case 1 :
      printf("Janeiro");  
    break;
    case 2 :
      printf("Fevereiro");
    break;
    case 3 :
      printf("Março");  
    break;
    case 4 :
      printf("Abril");  
    break;
    case 5 :
      printf("Maio");  
    break;
    case 6 :
      printf("Junnho");  
    break;
    case 7 :
      printf("Julho");  
    break;
    case 8 :
      printf("Agosto");  
    break;
    case 9 :
      printf("Setembro");  
    break;
    case 10 :
      printf("Outubro");  
    break;
    case 11 :
      printf("Novembro");  
    break;
    case  12:
      printf("Desembro");  
    break;
  }


  
  return 0;
}

