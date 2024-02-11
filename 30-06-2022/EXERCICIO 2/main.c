#include <stdio.h>
#include <string.h>
/*2- Escreva um Algoritmo que receba uma string do usuario e retorne cada letra em uma linha. usar o for*/
int main(void) {
  char palavra[20];
  printf("Digite uma palavra:");
  scanf("%[A-Z a-z]",palavra);
  for(int i = 0; i<strnlen(palavra,20);i++){
    printf("%c\n",palavra[i]);
  }
  return 0;
}