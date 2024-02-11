/*5.  Faça um  programa que  receba do  usuário um  arquivo texto e  um  caracter. Mostre na  tela quantas vezes aquele caractere ocorre dentro do  arquivo.
*/

#include <stdio.h>

int main(void) {
  char texto[20];
  FILE *arquivo;
  char caracter;
  //receber um texto
  printf("Digite um texto:");
  scanf("%s",texto);
  
  if((arquivo = fopen("arquivo.txt","w")) == NULL){
    printf("Erro na escrita do arquivo");
   }
  fprintf(arquivo,"%s",texto);
  fclose(arquivo);
  
  if((arquivo = fopen("arquivo.txt","r")) == NULL){
    printf("Erro na leitura do arquivo");
  }
    //receber um caracter
    printf("Digite um caracter:");
    scanf("%s",&caracter);
  char c;
  int cont = 0;
  while((c = fgetc(arquivo)) != EOF){
    
    if(c==caracter){
      cont++;
      }
    }
  printf("%c aparece %d vezes no aquivo",caracter,cont);
  fclose(arquivo);
  return 0;
}