#include <stdio.h>
/*1. Faça um programa que leia uma string e a imprima. */
int main(void) {
  printf("Digite uma algo:");
  char texto[10];
  scanf("%[A-Z a-z]",texto);
  printf("%s",texto);
  return 0;
}