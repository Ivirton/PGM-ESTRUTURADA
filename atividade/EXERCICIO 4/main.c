/* 4.Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
     a. O número digitado ao quadrado e
     b. A raiz quadrada do número digitado.
*/
#include <stdio.h>
#include <math.h>

int main(void) {
  float nun = 0;
  printf("Entre com um valor: ");
  scanf("%f",&nun);
  
  if(nun>=0){
    printf("O número digitado ao quadrado e %2.f \n",(nun*nun));
    printf("raiz quadrada é %f \n",sqrtf(nun));
  }
  
  return 0;
}