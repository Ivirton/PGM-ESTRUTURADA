#include <stdio.h>
#include <math.h>
/*5.Faça uma função que receba a altura e o raio de um cilindro circular e retorne o volume do cilindro.
*/

float volume(float altura,float raio){
  //volume = area.altura.raio
  const float pi = 3.14;
  return pi*raio*altura;
}

int main(void) {
  printf("%1.2f métros cúbicos",volume(1,4));
  return 0;
}