#include <stdio.h>
#include <stdlib.h>
/*
Leia uma matriz de 3x3 elementos. Calcule a soma dos elementos que estão na
diagonal secundária.

*/
int main(void) {
  int val[3][3];
  system("clear");
  // for para adicinar os valores
  for (int l = 0; l < 3; l++) {
    for (int c = 0; c < 3; c++) {
      printf("Valor da Linha %d coluna %d:", l + 1, c + 1);
      scanf("%d", &val[l][c]);
    }
  }
  system("clear");
  // for para exibir os valores
  for (int l = 0; l < 3; l++) {
    for (int c = 0; c < 3; c++) {
      printf(" %d ", val[l][c]);
    }
    printf("\n");
  }
  //soma dos valores na diagonal secundária
  int soma = val[0][2] + val[1][1] + val[2][0];
  printf("\n diagonal secundária: %d", soma);
  return 0;
}