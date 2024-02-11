/*
FAÇA UM PROGRAMA QUE MOSTRE AO USUÁRIO UM MENU COM 4 OPERAÇÕES MATEMÁTICAS (AS BÁSICAS) O USUARIO ESCOLHE A OPERAÇÃO E E SEU PROGRAMA MOSTRA DOIS VALORES NUMERICOS 
REALIZA A OPERAÇÃO , MOSTRANDO  RESULTADO E SAÍNDO.
*/
#include <stdio.h>

int menu(){
  int op;
  printf("Menu\n 1 - Adição \n 2 - Soma \n 3 - Divisão \n 4 - Multiplicação \n   - Sair \n > ");
  scanf("%d",&op);
  return op;
}

int main(void) {
  printf("Entre com dois valores \n");
  int n1,n2;
  scanf("%d %d", &n1 ,&n2);
  
  switch(menu()){
    case  1 :
      printf(" Resultado é  %d",(n1+n2));
    break;
    case  2 :
      printf(" Resultado é %d",(n1-n2));
    break;
    case  3 :
      printf(" Resultado é %d",(n1/n2));
    break;
    case  4 :
      printf(" Resultado é %d",(n1*n2));
    break;
  }
  return 0;
}