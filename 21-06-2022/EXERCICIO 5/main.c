/*5-Leia uma matriz de 3x3 elementos. Calcule e imprima a sua transposta.
pensando em um método para calcular a matriz
 */
#include <stdio.h>
#include <stdlib.h>
int main(void) {
  // matriz 3x3
  int A[3][3];
  int B[3][3];
  //  adicionarvalores
  for (int l = 0; l < 3; l++) {
    for (int c = 0; c < 3; c++) {
      printf("digite linha %d coluna %d: ", l + 1, c + 1);
      scanf("%d", &A[l][c]);
    }
  }
  //  transposta valores
  for (int l = 0; l < 3; l++) {
    int aux = 0;
    for (int c = 0; c < 3; c++) {
      B[l][aux] = A[aux][l];
      aux++;
    }
  }
  printf("\n");
  // produto das Diagonais Principais
  int dgP1 = A[0][0] * A[1][1] * A[2][2];
  int dgP2 = A[0][1] * A[1][2] * A[2][0];
  int dgP3 = A[0][2] * A[1][0] * A[2][1];
  // produto das diagonis secundarias
  int dgS1 = (A[0][1] * A[1][0] * A[2][2]);
  int dgS2 = (A[0][0] * A[1][2] * A[2][1]);
  int dgS3 = (A[0][2] * A[1][1] * A[2][0]);
  // Soma das diagonais  principal e secundária
  int dgPrincipal = dgP1 + dgP2 + dgP3;
  int dgSecundaria = dgS1 + dgS2 + dgS3;
  // calculo da matriz é dado pela diferença entre as diagonais
  int delta = dgPrincipal - dgSecundaria;
  // for para exibir os valores
  printf("Matriz inicial \n\n");
  for (int l = 0; l < 3; l++) {
     printf("|");
    for (int c = 0; c < 3; c++) {
      printf(" %d ", A[l][c]);
    }
     printf("|");
    printf("\n");
  }
  printf("\n");
  printf("Calculo da Matrix  é %d \n", delta);
  printf("\n");
  printf("Transposta \n\n");
  for (int l = 0; l < 3; l++) {
     printf("|");
    for (int c = 0; c < 3; c++) {
      printf(" %d ", B[l][c]);
    }
     printf("|");
    printf("\n");
  }
  return 0;
}