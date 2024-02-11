/*7.  Faça um  programa que receba do  usuário um  arquivo texto. Crie outro arquivo texto contendo o  texto do  arquivo de  entrada, mas com as  vogais substituídas por  "*".
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void) {
  //variaveis
    char texto[20];
    FILE *arq1,*arq2;
    char c; 
    int cont = 0;
  //escreve e fecha o arquivo01
  {
    if((arq1 = fopen("arquivo1.txt","w")) == NULL){
      printf("Erro ao abrir arquivo1");
    }
    printf("Digite um texto:");
    scanf("%[A-Z a-z]",texto);
    fprintf(arq1, "%s",texto);
    fclose(arq1);
  }
    if((arq1 = fopen("arquivo1.txt","r")) == NULL){
      printf("Erro ao ler o aquivo");
    } 
    if((arq2 = fopen("arquivo2.txt","w")) == NULL){
      printf("Erro ao abrir o arquivo2");
    }
    //ler todos os caracteres do aquivo1
    //verifica quem são as vogais e as subistitui pelo *
    while((c = fgetc(arq1)) != EOF){
      //trasnforma todos os caracteres em maiúculos 
      //para melhor comparar os dados
      char f = toupper(c);
      if( f == 'A' || f == 'E' || f == 'I' || f == 'O' || f == 'U' ){
        fprintf(arq2,"%c",'*');
      }else{
         fprintf(arq2,"%c",c);
      }
    }
    //fecha todas todos os arquivos
    fclose(arq1);
    fclose(arq2);
  return 0;
}