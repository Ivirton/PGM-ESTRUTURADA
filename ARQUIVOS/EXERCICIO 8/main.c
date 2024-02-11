/*8. Faça um  programa que  leia  o  conteúdo de  um  arquivo e  crie um  arquivo com o  mesmo conteúdo, mas com todas as  letras minúsculas convertidas para  maiúsculas. Os  nomes dos arquivos serão fornecidos, via teclado, pelo usuário. A  função que converte maiúscula para minúscula é  o toupper(). Ela  é  aplicada em  cada caractere da  string. */
#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main(void) {
  
  FILE *arq,*arq2;
  char texto[20], nomeArq1[20],nomeArq2[20];
  
  // 01 - rebeber nome do arquivo e escrever seu conteudo
  {
    printf("Digite o nome do arquivo:");
    scanf("%s", nomeArq1); //recebe nome do aquivo
    strcat(nomeArq1, ".txt"); // concatena nome com .txt
    if ((arq = fopen(nomeArq1, "w")) == NULL) {
      printf("Erro na na abertura");
    }
    //escreve dados no arquivo normal e fecha o mesmo
    fprintf(arq, "%s", "joso gomes,klb,zezo,zeze de camargo");
    fclose(arq);
  } 
   printf("Digite o nome do arquivo 2:");
    scanf("%s", nomeArq2); 
    strcat(nomeArq2, ".txt"); 
    if ((arq2 = fopen(nomeArq2, "w")) == NULL) {
      printf("Erro na na abertura");
    }

   // ler os dados do primeiro arquivo lido
  if ((arq = fopen(nomeArq1, "r")) == NULL) {
    printf("Erro na na abertura");
  }
  char c;
  printf("\n");
  while ((c = fgetc(arq)) != EOF) {
    printf("%c", toupper(c));
    fprintf(arq2,"%c",toupper(c));
  }
  fclose(arq);
  fclose(arq2);

  return 0;
}