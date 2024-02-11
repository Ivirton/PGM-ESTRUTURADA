/*42 receba um salário-base de um funcionário, calcule e imprima o salario a receber, sabendo-se que esse funcionário tem uma gratificação de 5% sobre o salário base alem disso ele paga 7% de imposto sobre o salário base*/

#include <stdio.h>

int main(void) {
  //variaveis
    float salario = 0,gratificacao = 0.05,
    pagarImposto = 0.07;
  
    printf("Informe o salário ");
    scanf("%f",&salario); 
    salario += (salario*gratificacao)-pagarImposto;
    printf("Salario %f /n",salario);
    
  return 0;
}