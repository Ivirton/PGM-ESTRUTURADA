/*
FAÇA U M PROGRAMA QUE LEIA 5 NUMEROS E ESCREVA O MENOR E O MAIOR VALOR LIDO

*/

#include <stdio.h>

int main(void) {
int num,maior,menor,i;
 printf("Digite 1° número:");
 scanf("%i", &num);
  maior=num;
  menor=num;
 for(i=1; i<5; i++)
 {
   printf("digite %d° numero:",i+1);
   scanf("%i", &num);
  
   if(num>maior)
       maior=num;
   else
   if(num<menor)
       menor=num;
 }
     printf("menor número é : %d \n", menor);
     printf("maior número é : %d", maior);
  
  return 0;
}