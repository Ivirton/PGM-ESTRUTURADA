#include <stdio.h>
#include <string.h>
/*7. Digite um nome, calcule e retorne quantas letras tem esse nome.
*/
int main(void) {
  printf("Digite um nome:");
  char nome[20];
  scanf("%[A-Z a-z]",nome);
int f = strlen(nome);
 
  printf("%d letras",f);
  
  
  
  return 0;
}