#include <stdio.h>
#include <string.h>
/*4-Escreva um Algoritmo que receba uma string do usuario e retorne a string de trás pra frente
*/
int main(void) {
  char texto[20];
  printf("Digite um texto:");
  scanf("%[A-Z a-z]",texto);

  for(int i = strlen(texto); i>=0; i--){
    printf("%c\n",texto[i]);
  }
  return 0;
}