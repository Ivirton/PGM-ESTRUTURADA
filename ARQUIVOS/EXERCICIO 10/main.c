/*10.Faça um  programa que receba o  nome de  um  arquivo de  entrada e  outro de  saída. O arquivo de  entrada contém em  cada linha o  nome de  uma cidade (ocupando 40  caracteres) e  o  seu número de  habitantes. O  programa deverá ler  o  arquivo de  entrada e  gerar um  arquivo de  saída onde aparece o  nome da  cidade mais populosa seguida pelo seu número de  habitantes.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//fazendo....

int main(void) {
  FILE *arq,*arq2;
  char nomeArq[10],ln[40];
  printf("Digite o nome do arquivo de entrada:");
  scanf("%s",nomeArq);
  strcat(nomeArq,".txt");
  if((arq = fopen(nomeArq,"w")) == NULL){
    printf("Erro ao abrir arquivo");
    exit(1);
  }
    fprintf(arq,"%s %f\n","São Luis",1.115);
    fprintf(arq,"%s %f\n","Imperatriz",259.980);
    fprintf(arq,"%s %f\n","Timon",171.317);
    fprintf(arq,"%s %f\n","Caxias",166.159);
    fclose(arq);
   if((arq = fopen(nomeArq,"r")) == NULL){
     exit(1);
   }
   char nome[40];
   float popu;
   while((fscanf(arq, "%s[A-Z a-z ]",nome)) != EOF){
     printf("%s ",nome);
   }
  
  
  return 0;
}