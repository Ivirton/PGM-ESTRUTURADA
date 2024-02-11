/*6-Faça um programa que calcule e escreva o valor de S onde S =(1/1)+(3/2)+(5/3)...(99/50)*/

#include <stdio.h>

int main(void) {
  int numerador = 1;

  
  for (int denominador=1; denominador<=50; denominador++) {
   printf("%d/%d \n",numerador,denominador);
    
    numerador = numerador + 2; //numerador segue incrementado 2 em 2 
  }
  
  return 0;
}