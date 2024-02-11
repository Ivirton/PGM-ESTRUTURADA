#include <stdio.h>
/*3. Crie um programa que calcula o comprimento de uma string (nao use a função ao strlen). ˜
*/
int main(void) {
 char string[10];
  printf("Digite uma palavra:");
  scanf("%[A-Z a-z]",string);
  
  int posicao = 0;
  while(string[posicao] != '\0'){
    posicao++;
  }
  printf("comprimento de  %s é %d",string,posicao);
  return 0;
}