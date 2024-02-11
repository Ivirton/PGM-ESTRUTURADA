/* 3.Faça uma função e um programa de teste para o cálculo do volume de uma esfera. Sendo que o raio é passado por parâmetro.*/
#include <stdio.h>
#include<math.h>
void volumeEsfera(float raio){
  const float pi = 3.14;
  raio = powf(raio,3);
  float volume = (4*pi*raio)/3;
  printf("%1.2f métros cúbicos",volume);
}

int main(void) {
 volumeEsfera(5);
  return 0;
}