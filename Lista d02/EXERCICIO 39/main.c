#include <stdio.h>

int main(void) {
  float g1,g2,g3, importacia = 780.000;
  g1 = importacia * 0.46;
  g2 = importacia  * 0.32;
  g3 = importacia * (0.46+0.32);
  
  printf("Ganhador 1 :%f",g1 );
  printf("\n");
  printf("Ganhador 3 :%f",g2);
  printf("\n");
  printf("Ganhador 3 : %f",g3);
  printf("\n");
  
  
  return 0;
}