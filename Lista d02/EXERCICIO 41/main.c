/*41 Faça um programa que leia o valor da hora de trabalho (em reais ) e numero de horas trabalhadas no mes. imprima o valor  a ser pago ao 
funcionariom adicionando 10% sobre o valor calculado */

#include <stdio.h>

int main(void) {
  float valorHoraTrabalho = 0;
  const int diasTrabalho = 30;
  float valorPago = 0;
  float porcentagem = 0.1;
  printf("Digite o valor da hora de trabalho:");
  scanf("%f", &valorHoraTrabalho);
  valorPago = (diasTrabalho * valorHoraTrabalho)+porcentagem;
  
 printf("o valor a ser pago ao mes é  %f",valorPago);
  return 0;
}