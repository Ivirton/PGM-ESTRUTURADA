  /*1.Ecreva um  programa que:
(a)  Crie/abra um  arquivo texto de  nome “arq. txt”
(b)  Permita que o  usuário grave diversos caracteres nesse arquivo, até  que  o  usuário entre com o  caractere “0"
(c)  Feche o  arquivo Agora, abra e  leia  o  arquivo, caractere por  caractere, e  escreva na  tela todos os  caracteres  armazenados.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
 
  FILE *arq; 
  char texto; 
  arq = fopen("arq.txt", "w");  // Abrindo o arquivo 
  if(arq == NULL){ //testa se o arquivo existe
    printf("erro ao abrir o arquivo");
    exit(0); 
    //finaliza o programa
  }
  do{
    printf("Digite um caracter (0 para sair) -> ");
    scanf("%s",&texto); 
    if(texto != '0') fputs(&texto,arq);
  }while(texto != '0');
  fclose(arq);
  printf("arquivo fechado\n");

  arq = fopen("arq.txt","r");
 if(arq == NULL){
    printf("erro ao ler o arquivo\n");
    exit(0); 
    //finalizao programa
  }
  while((texto =fgetc(arq)) != -1){
    printf("\n %s",&texto);
  }
  printf("\n\n arquivo fechado..");
  fclose(arq);
  return 0;
}