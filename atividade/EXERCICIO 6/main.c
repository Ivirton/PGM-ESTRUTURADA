/*
Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles, assim como a diferença existente entre
ambos.
*/
#include <stdio.h>
int main(void){
  
int n1,n2,maior,direfenca; //variaveis 
  
printf("Entre com dois valores: \n"); //saída de dados
scanf("%d %d",&n1,&n2); //entrada de dados 
    
maior = (n1>n2) ? n1:n2;  // Operador ternário recebe o maior número
direfenca = (n1-n2);      // Diferença entre dois números
  
printf("Maior número é %d \n",maior);
printf("A difereça é %d \n",direfenca);

  
  return 0;
}