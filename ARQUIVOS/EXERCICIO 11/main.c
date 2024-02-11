/*11.Faça um  programa no  qual o  usuário informa o  nome do  arquivo e  uma palavra, e  retorne o  número de  vezes que  aquela palavra aparece no  arquivo.
.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) {
  FILE *arq;
  char palavra[20];
  char nomeArquivo[10];

 printf("Digite nome do aquivo:");
 scanf("%s",nomeArquivo);
 strcat(nomeArquivo,".txt");
 printf("Digite uma palavra:");
 scanf("%[A-Z a-z]",palavra);

 arq = fopen(nomeArquivo,"w");
  if(arq == NULL){
    printf("erro");
    exit(1);
  }
  {
  fprintf(arq,"%s","ivirton nayron");
  fprintf(arq,"%s","jose");
  fprintf(arq,"%s","maria");
  fprintf(arq,"%s","jose");
  fprintf(arq,"%s","jose");
  fprintf(arq,"%s","pedro");
  fprintf(arq,"%s","joao");
  }
  fclose(arq);
  arq = fopen(nomeArquivo,"r");
  if(arq == NULL){
    printf("erro");
    exit(1);
  }
  char valor[10];
  int contador = 0;
  while((fscanf(arq,"%s",valor)) != EOF){
    //printf("%s\n",valor);
    if(strcmp(valor,palavra) == 0){
      contador++;
    }
  }
  printf("\n a palavra %s aparece %d",palavra,contador);
  fclose(arq);
    
  return 0;
}