/*   Leia um numero real. Se o número for positivo
imprima a raiz quadrada. Do contrário, imprima o numero ao quadrado. */

#include <stdio.h>
#include <math.h>

int main(void) {
  float nun = 0;
  printf("Digite um número: ");
  scanf("%f",&nun);
  if(nun>0){
  printf("raiz quadrada é %2.f \n",sqrtf(nun));
    ;
  }else{
    printf("%2.f",(nun*nun));
  }
  
  return 0;
}