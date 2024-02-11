/*
Escreva um menu de opçoes abaixo.Leia a opção do usuario e execulte a operação escolhida.Escreva uma mensagem de erro se a opção for inválida.
 1 -  soma de dois numeros 
 2 - diferença entre dois números 
 3 - produto entre dois números
 4 - Divisão ente dois números
*/

#include <stdio.h>

int main(void) {
  int n1,n2,op;
  printf("Entre com dois números \n");
  scanf("%d %d", &n1,&n2);
  printf("1 - soma \n2 - Diferença \n3 - Produto \n4 - Divisão \n > ");
  scanf("%d", &op);
switch(op){
  case 1://soma
      printf("O Soma é %d",(n1+n2));
  break;
    case 2: //diferença
   printf("A diferença é %d",(n1-n2));
  break;
    case 3:// produto
       printf("o produto é %d",(n1*n2));
  break;
    case 4: //divisao
    printf("a Divisão é %d",(n1/n2));
  break;
  default:
printf("Opção inválida!");
  break;

  
}
  return 0;
}