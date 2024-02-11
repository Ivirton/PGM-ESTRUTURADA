/*40 Uma empresa contrata um encanador a R$ 30,00 por dia. faça um programa que solicite o numero de Dias trabalhado pelo encanador e imprima a qauntidade que devera ser pago 
, sabendo-se que sao descontatos 8% para importo de renda

41 Faça um programa que leiao valor da hora de trabalho (em reais ) e numero de horas trabalhadas no mes. imprima o valor  a ser pago ao 
funcionariom adicionando 10% sobre o valor calculado 

42 - Receba o salario-base de um funcionario. Calcule e imprima o salario a receber, sabendo-se que esse funcionario tem uma gratificaçao de 5% 
sobre o salario-base. Alem disso ele paga 7% de importo sobre o salário-base.

*/



#include <stdio.h>

int main(void) {
  float valor = 30;
  int nunDias = 0;
  float desconto = 0.08;
  
  printf("Informe o número de dias de trabalho do encanador:");
  scanf("%d", &nunDias);
   printf("Valor a ser pago é R$ %f ",(nunDias*valor)-desconto);
  
  return 0;
}