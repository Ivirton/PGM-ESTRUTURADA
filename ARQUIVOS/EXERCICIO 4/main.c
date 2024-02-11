/*4.  Faça um  programa que receba do  usuário um  arquivo texto e  mostre na  tela  quantas letras são  vogais e  quantas são  consoantes.
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
  scanf("%s",texto);
  fprintf(arquivo,"%s",texto);
  fclose(arquivo);
  //leitura
  arquivo = fopen("arquivo.txt","r");
  char letra;
  int contVg = 0;
  int contCs = 0;
  while((letra = fgetc(arquivo)) != EOF){
    //Trasforma cada caracter minúsculo em maiúsculo facilitando a contagem das vogais
    char c = toupper(letra);
    //compara o caracter com as vogais
    if(c == 'A' || c == 'E' || c == 'I'|| c == 'O'|| c == 'E'){
      contVg++;
    }else{
      contCs++;
    }
    printf("%c",letra);
  }
  printf("\n%d vogais %d consoantes ",contVg,contCs);
  fclose(arquivo);
 
  
  return 0;
}