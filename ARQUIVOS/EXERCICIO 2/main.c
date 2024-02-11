/*2.  Faça um  programa que receba do  usuário um  arquivo texto e  mostre na  tela  quantas linhas esse arquivo possui.
*/
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {

  FILE *arq;
  char texto[20];  
  char *pont = texto;
  printf("Digite um texto:");
  scanf("%s",pont);
  //printf("%s",pont);
 
  arq = fopen("arquivo.txt","a");
  if(arq==NULL){
    printf("Erro na escrita do arquivo\n");
    exit(1);
  }
  
  fprintf(arq,"%s\n",pont);
  fclose(arq);
  // leitura do arquivo
  arq = fopen("arquivo.txt","r");
  if(arq == NULL) {
    printf("erro na leitura do arquivo");
    exit(1);
  }
  char linha[20];
  char c ;
  int cont = 0;
  
  while(fscanf(arq,"%s",linha) != EOF){
     
    if(linha[strlen(linha)] == '\0'){
      cont++;
      printf("%s \n",linha);
   }
    
  }
  printf("%d linhas " ,cont);
  //printf("\n %c",linha[strlen(linha)-1]);

  fclose(arq);
   
return 0;
}