/*
faça um programa que determina e mostre os cincos primeiros multiplos de 3, considerando números maiores que 0;
*/

#include <stdio.h>

int main(void) {
  for(int contador = 1; contador <=5; contador++){
    printf("%d \n", contador*3);
  }
  return 0;
}