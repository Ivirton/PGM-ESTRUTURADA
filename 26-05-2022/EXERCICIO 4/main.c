/*
4-Escreva um algoritmo que leia certa quantidade de números e imprima o maior
deles e quantas vezes o maior número foi lido. A quantidade de números a serem
curl $REPLIT_DB_URL -d 'key=value'
curl $REPLIT_DB_URL -d 'key=value'
curl $REPLIT_DB_URL -d 'key=value'
lidos deve ser fornecida pelo usuário
*/

#include <stdio.h>
int main(void) {
  int nuneroVezes = 0, valor = 0, maior = 0, contLido = 0;
  printf("Quantidade de vezes:");
  scanf("%d", &nuneroVezes);
  for (int i = 0; i < nuneroVezes; i++) {
    printf("%d° valor:", i + 1);
    scanf("%d", &valor);

    if (valor > maior) {
      maior = valor;
      contLido = 1;
    } else if (maior == valor) {
      contLido++;
    }
  }

  printf("Maior N° é  %d \n", maior);
  printf("Apareceu  %d Vezes", contLido);

  return 0;
}