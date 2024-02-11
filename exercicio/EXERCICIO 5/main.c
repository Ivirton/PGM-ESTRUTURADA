/*
5-Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se aposentar. As condições para aposentadoria são 
e Ter pelo menos 65 anos,
e Ou ter trabalhado pelo menos 30 anos,
e Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.*/

#include <stdio.h>

int main(void) {
  int idade,tempoServiço;
  printf("Idade: ");
  scanf("%d",&idade);
  printf("Tempo de Serviço: ");
  scanf("%d",&tempoServiço);
  if(idade >= 65 || tempoServiço >= 30){
    printf("O senhor já pode se aposentar ");
  }else{
    printf("Ainda não pode se aposentar. \n Continue trabalhando! ");
  }
  return 0;
}