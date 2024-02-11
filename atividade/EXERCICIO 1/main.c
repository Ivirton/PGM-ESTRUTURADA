/* Faça um programa que receba dois números e mostre qual deles é o maior.*/
#include <stdio.h>

int main(void) {
  int n1,n2;
 printf("Digite um número:");
  scanf("%d",&n1);
 printf("Digite outro número:");
  scanf("%d",&n2);
  
  if(n1>n2) printf("%d > %d",n1 , n2);
  else printf("%d < %d",n1 , n2);
  
  return 0;
}