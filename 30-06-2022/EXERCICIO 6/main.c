#include <stdio.h>
/*6. faça um programa que leia um nome e imprima as 4 primeiras letras do nome.
*/
int main(void) {
  printf("Digite um nome:");
  char nome[20];
  scanf("%[A-Z a-z]",nome);

  for(int i = 0; i<4; i++){
    printf("%c",nome[i]);
  }
  return 0;
}