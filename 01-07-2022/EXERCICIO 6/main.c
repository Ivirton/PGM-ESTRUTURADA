#include <stdio.h>
/*6 Elabore uma função que receba três notas de um aluno como parâmetros e uma letra. Se a letra for A, a função deverá calcular a média aritmética das notas do aluno; se for P, deverá calcular a média ponderada, com pesos 5, 3 e 2.
*/
void media(float n1,float n2,float n3,char op){
  switch(op){
    case 'A':
    //calcular a média aritmética
    printf("média aritmética: %1.2f",(n1+n2+n3)/3);
    break;
    case 'P':
    //calcular a média ponderada
      printf("média ponderada: %1.2f",((n1*5)+(n2*3)+(n3*2))/10);
    break;
  }
}


int main(void) {
  media(10,5,10,'P');
  return 0;
}