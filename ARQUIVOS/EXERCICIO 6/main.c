/*6.  Faça um  programa que receba do  usuário um  arquivo texto e  mostre na  tela  quantas vezes cada letra do  alfabeto aparece dentro do  arquivo.
*/
#include <string.h>
#include <stdio.h>

int main(void) {
  char texto[20];
  FILE *arquivo;
  //receber um texto
  printf("Digite um texto:");
  scanf("%s",texto);
  //abre e escreve dados no arquivo
  if((arquivo = fopen("arquivo.txt","w")) == NULL){
    printf("Erro na escrita do arquivo");
   }
  fprintf(arquivo,"%s",texto);
  fclose(arquivo);
  if((arquivo = fopen("arquivo.txt","r")) == NULL){
    printf("Erro na leitura do arquivo");
  }
  
  char a;
  char repet;
  //compara cada caracter do arquivo com o texto recebido e 
  //contabiliza cada letra ainda não consegui remover as letras repetidas
  while((a =fgetc(arquivo)) != EOF){
      int cont = 0;
      repet = '0';
      for(int i = 0;i<strlen(texto);i++){
        if(texto[i] == a){
          cont++;
          repet = a;
        }
      }
        printf("%c aparece %d vezes\n",a,cont);
  }
  
  fclose(arquivo);
  return 0;
}