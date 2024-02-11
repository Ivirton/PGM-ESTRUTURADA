/*Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se aprestação for maior que 20% do salário imprima: Empréstimo não concedido, caso contrário imprima: Empréstimo concedido.*/

#include <stdio.h>

int main(void) {
  float salario = 0,emprestimo = 0;
  
  printf("Salário do trabalhador: ");
  scanf("%f",&salario);
  printf("valor da prestação do empréstimo: ");
  scanf("%f",&emprestimo);
  
  if( salario*0.2 >= emprestimo){
    printf("Empréstimo concedido");
  }else{
    printf("Empréstimo não concedido");
  }

  
  return 0;
}