#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que preenche uma matriz 4 x 4 com o produto do valor da linha e da coluna de cada elemento. Em seguida, imprima na tela a matriz*/

int main(void) {
  int data[4][4];
  int produto[4] = {1,1,1,1};
  for(int c = 0; c<4;c++){
   // produto[c] = data[c][c];
     for(int i = 0; i<4;i++){
       printf("digite coluna %d linha %d:",c+1,i+1);
       scanf("%d",&data[c][i]);
       produto[c] *= data[c][i];
     }
   
  }
  system("clear");
  for(int c = 0; c<4;c++){
     for(int i = 0; i<4;i++){
       printf(" %d ",data[c][i]);
     }
    printf("produto é |%d|",produto[c]);
    printf("\n");

  }
  return 0;
}