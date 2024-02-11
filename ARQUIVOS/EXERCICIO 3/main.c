/*3. Faça um  programa que receba do  usuário um  arquivo texto e  mostre na  tela  quantas letras são  vogais.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(void) {
  //escrita
  FILE *arquivo;
  char texto[20];
  if((arquivo = fopen("arquivo.txt","w")) == NULL){
    printf("Erro ao abrir aquivo!");
    exit(0);
  }
  printf("Digite um texto:");
  scanf("%[A-Z a-z]",texto);
  fprintf(arquivo,"%s",texto);
  fclose(arquivo);
  //leitura
  arquivo = fopen("arquivo.txt","r");
  char letra;
  int cont = 0;
  while((letra = fgetc(arquivo)) != EOF){
    //Trasforma cada caracter minúsculo em maiúsculo facilitando a contagem das vogais
    char c = toupper(letra);
    //compara o caracter com as vogais
    if(c == 'A' || c == 'E' || c == 'I'|| c == 'O'|| c == 'E'){
      cont++;
    }
    printf("%c",letra);
  }
  printf("\n%d vogais",cont);
  fclose(arquivo);
 
  
  return 0;
}