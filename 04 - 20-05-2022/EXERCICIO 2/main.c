/* Q2 Faça um algoritmo utilizando o comando while que mostra uma contagem regressiva na tela, iniciando em 10 e determinando o 0. Mostra uma mensagem “FIM” após a contagem.*/

#include <stdio.h>

int main(void) {
  int cont = 10;
  
  while(cont >= 0){
  printf("  %d \n",cont);
    cont--;
  }
  printf("FIM \n");
  return 0;
} 