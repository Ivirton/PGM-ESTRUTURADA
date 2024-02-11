/*1.
Inserir valores inteiros em um vetor
Aqui vocês deverão inserir de 1 a 20 valores no vetor
Quando os usuários entrarem pela segunda vês nesta opção deve continuar a inserir de onde parou
Quando não tiver nenhum valor no vetor nenhuma outra opção deve ser aceita
Quando o vetor tiver cheio esta opção não deve ser aceita
2.Mostrar quem é o maior dentro do vetor
3.Mostrar a Média dos valores do vetor
4.Ordenar o vetor do maior para o menor
Aqui vocês vão ordenar o vetor de forma decrescente
5.Mostrar os múltiplos de 4 que estão dentro do vetor
6.Substituir o valor de uma das posições do vetor
Escolher uma das posições do vetor e alterar o valor
7.Sempre que você digitar 0 deve sair do menu e fechar o programa*/

#include <stdio.h>
#include <stdlib.h>
int main(void) {
   system("clear");
   //variaveis
   
    int  tamanho = 20,ativo = 0,maior = 0,media = 0;
    int op,aux = 0,vetor[tamanho];
  // laço de repetição com menu interativo 
  do{
     printf("-----* MENU *-------\n\n");
     printf("0 - SAIR  \n1 - ADD VALORES\n2 - MAIOR  \n3 - MOSTRAR A MÉDIA\n");
     printf("4 - ORDENAR VETOR DECRECENTE\n5 - MÚLTIPLOS DE 4 \n6 - SUBSTITUIR VETOR \n7 - MOSTRA VETOR  \n\n");
     printf("--------------------\n > ");
     //variavel de operação
      scanf("%d",&op); 
        switch(op){
          //.Sempre que você digitar 0 deve sair do menu e fechar o programa
          case 0: 
            system("clear");
            printf(" Programa finalizado...\n\n");
            break;
           //Inserir valores inteiros em um vetor
          case 1:
            system("clear");
            if(ativo == 0){
              for(int i = 0; i<tamanho;i++){
                 printf("Digite %d° valor:",i+1);
                 scanf("%d",&vetor[i]);
                 system("clear");
                }
                 ativo = 1;
                 printf("Números adicionados!\n\n");
                }else{
                 printf("vetor cheio!\n\n");
              }
            break;
           // Mostrar quem é o maior dentro do vetor
          case 2:
             system("clear");
            if(ativo == 1)
              for(int c = 0; c<tamanho;c++){
                if(vetor[c] > maior) {
                 maior = vetor[c]; // maior numero lido   
              }
              system("clear");
              printf("  Maior número é %d \n\n",maior);
              }else{
                 printf("Insira dados ao vetor!\n\n");
              }
            break;
          // Mostrar a Média dos valores do vetor
           case 3: 
              system("clear");
             if(ativo ==1){
                for(int c = 0;c<tamanho; c++) media = media + vetor[c];
                media =   media/tamanho;
                printf("   Média é %d \n\n",media);
             }else{
                 printf("Insira dados ao vetor!\n\n");
              }
            break;
          // 4.Ordenar o vetor do maior para o menor
          case 4: 
              system("clear");
              if(ativo == 1){
                for(int i = 0;i<tamanho; i++){
                  int aux = 0;
                  for(int j = 0;j<tamanho;j++){
                    if(vetor[i]>vetor[j]){
                      aux = vetor[i];
                      vetor[i] = vetor[j];
                      vetor[j] = aux;
                    }
                  }
                }
                for(int i = 0; i<tamanho;i++){
                printf(" %d; ",vetor[i]);
                }
                printf("\n\n");
              }
            break;
          // 5.Mostrar os múltiplos de 4 que estão dentro do vetor
          case 5: 
            system("clear");
            if(ativo == 1){
              for(int c = 0;c<tamanho;c++){
              printf("     4 x %d = %d \n",vetor[c],(vetor[c]*4));
              }
            }else{
                 printf("Insira dados ao vetor!\n\n");
              }
              printf("\n");
            break;
          
          case 6: // 6.Substituir o valor de uma das posições do vetor
             system("clear");
            if(ativo == 1){
              system("clear");
              printf("Digite a posição:");
              
              int p = 0;
              scanf("%d",&p);
              if(p<=tamanho){
                  printf("Digite o Valor:");
                  if(vetor[p] == maior) maior = 0; 
                  scanf("%d",&vetor[p]);
                  system("clear");
                  printf("Valor atualizado! \n\n");
              }else{
                 printf("digite valor menor !\n\n");
              }
             
            }else{
                 printf("Insira dados ao vetor!\n\n");
              }
            break;
          case 7:
            system("clear");
            if(ativo == 1){
              for(int i = 0; i<tamanho;i++){
              printf(" %d; ",vetor[i]);
              }
              printf("\n\n");
            }else{
                 printf("Insira dados ao vetor!\n\n");
              }
          break;
         
          default: 
            system("clear");
            printf("Digite outra Opção! \n\n");
          break;
        }
     
  }while(op!=0);
  return 0;
}