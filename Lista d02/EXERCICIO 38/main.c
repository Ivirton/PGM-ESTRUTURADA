#include <stdio.h>

int main() {
float salario = 0;
  printf("Digite o seu salário:");
  scanf("%f", &salario);
  float aumento = salario * 0.25;
  float salarioAtual = (aumento + salario);
  printf("seu novo salário com 25%% de aumento é %f", salarioAtual);
  return 0;
}