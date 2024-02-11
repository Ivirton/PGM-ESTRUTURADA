/*
Faça uma funçao que receba um interiro n como parametro, calcule e retorne 
o resultado da seguinte série:
S = 2/4 + 5/5 +10/6 .... (N^2 + 1)/(N+3)
*/
#include <stdio.h>
#include <math.h>

float function(int n){
  float num = pow(n,2)+1;
  float deno = (n+3);
  
  printf("%1.0f/%1.0f = ",num,deno);
  printf("%1.1f\n",num/deno);
  return num/deno; 
}

int main(void) {
  int n = 4;
  float s =0;
  for(int i=1;i<n;i++){
    s += function(i);
  }
  printf("\nResultado %1.2f",s);
 
  
  return 0;
}