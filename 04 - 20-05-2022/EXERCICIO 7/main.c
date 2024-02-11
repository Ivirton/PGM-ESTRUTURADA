/*
FAÇA UM PROGRAMA QUE CALCULE E MOSTE A SOMA DOS 50 PRIMEIROS NUMEROS PARES
*/

#include <stdio.h>

int main(void) {
int soma = 0;
for(int c = 2; c<=50; c+= 2){
    soma += c; //operador de atribuição 
}
printf("%d \n",soma);
return 0;
}