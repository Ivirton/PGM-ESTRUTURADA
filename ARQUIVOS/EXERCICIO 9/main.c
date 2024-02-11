/*9.Faça um  programa que receba dois arquivos do  usuário, e  crie  um  terceiro arquivo com o  conteúdo dos dois primeiros juntos (o  conteúdo do  primeiro seguido do  conteúdo do segundo).
*/
#include <stdio.h>
#include <string.h>

int main(void) {
  FILE *arq1,*arq2,*arq3;
  char conteudo[30];
  arq3 = fopen("arq3.txt","w");
  // arq01
  if((arq1 = fopen("arq1.txt","r")) == NULL){
    printf("Erro 01");
  }
  while(fscanf(arq1,"%s[A-Z a-z ]",conteudo) != EOF){
    fprintf(arq3,"%s\n",conteudo);
  }
  fclose(arq1);
    // arq02
  if((arq2 = fopen("arq2.txt","r")) == NULL){
    printf("Erro 01");
  }
  while(fscanf(arq2,"%s[A-Z a-z ]",conteudo) != EOF){
    fprintf(arq3,"%s\n",conteudo);
  }
  fclose(arq2);
  fclose(arq3);
  return 0;
}