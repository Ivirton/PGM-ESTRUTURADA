/*
7-Leia um número positivo do usuário, então, calcule e imprima a sequência Fibonacci até o primeiro número superior ao número lido. Exemplo: se o usuário informou o número 30, a sequência a ser impressa será 0 1 1 2 3 5 8 13 21  34.*/
#include <stdio.h>
int main(void) {
  int resultado,
  a = 0, 
  b = 1, 
  n = 0;
  printf("entre com um valor:");
  scanf("%d",&n);
  for(int c = 0; c<n;c++){
    resultado = a + b;
    a = b;
    b = resultado;
    printf("%d \n",resultado);
  }
  return 0;
}