/*Faça um algorítimo que receba um inteiro um número inteiro positivo n e calcule o somatório
de 1 até n*/

#include <stdio.h>
void somatorio(int n){
  if(n>0){
    int soma = 0;
     for(int c =1;c<=n;c++){
      soma += c;
     }
    printf("∑ = %d",soma);
  }
}
int main(void) {
  somatorio(3);
  return 0;
}