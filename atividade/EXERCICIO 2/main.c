
/* Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada do número. Se o número for
negativo, mostre uma mensagem dizendo que o número é inválido.
importe a biblioteca math (#include <math.h> ) e use a função sqrt( ) para raiz*/

#include <stdio.h>
#include <math.h>

int main(void) {
  int nun = 0;
  printf("Digite um número: ");
  scanf("%d",&nun);
  if(nun>=0){
    printf("raiz quadrada é %2.f \n",sqrtf(nun));
  }else{
    printf("número é inválido");
  }
  
  return 0;
}