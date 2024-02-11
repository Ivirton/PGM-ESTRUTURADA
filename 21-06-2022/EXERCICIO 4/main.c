/*4-Leia uma matriz 4 x 4, imprima a matriz e retorne a localização (linha e a
 * coluna) do maior valor.
 */

#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int val[4][4],maior,coluna,linha;
 
  for (int c = 0; c < 4; c++) {
    for (int i = 0; i < 4; i++) {
      printf("digite Valor :");
      scanf("%d", &val[c][i]);
      if(val[c][i] > maior){
        maior = val[c][i];
        linha = c+1;
        coluna  = i+1;
      }
    }
  }
  system("clear");
  for (int c = 0; c < 4; c++) {
    for (int i = 0; i < 4; i++) {
     printf(" %d ",val[c][i]);
    }
    printf("\n");
  }
   printf("\n maior é %d \n",maior);
   printf("Linha %d coluna %d",linha,coluna);
  return 0;
}