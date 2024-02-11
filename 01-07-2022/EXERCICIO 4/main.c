/*4.Faça uma função que receba dois números e retorne qual deles é o maior.
*/
#include <stdio.h>

int maior(int a,int b){
  return (a>b) ? a:b;
  //operador ternário
}

int main(void) {
  printf("maior é %d",maior(-1,1));
  return 0;
}