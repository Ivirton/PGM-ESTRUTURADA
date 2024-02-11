#include <stdio.h>
/*5. Entre com um nome e imprima o nome somente se a primeira letra do nome for ‘a’ (maiuscula ou minuscula). ´
*/
int main(void) {
  printf("Digite um nome:");
  char nome[20];
  scanf("%[A-Z a-z]",nome);
  if(nome[0] == 'a' || nome[0] == 'A'){
    printf("%s",nome);
  }
  return 0;
}