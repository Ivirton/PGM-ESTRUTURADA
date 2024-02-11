/*Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e exiba na tela a média destas notas. Uma
nota válida deve ser, obrigatoriamente, um valor entre 0.0 e 10.0, onde caso a nota não possua um valor válido, este fato deve ser informado ao usuário e o programa termina. -.
*/

#include <stdio.h>
int main(void) {
  
  float nota1, nota2, media;
  
  printf("Nota 1: ");
  scanf("%f",&nota1);
  printf("Nota 2: ");
  scanf("%f",&nota2);
  
  if(nota1 >= 0 && nota1 <=10){
    if(nota2 >= 0 && nota2 <= 10){
        media = (nota1 + nota2)/2;
        printf("Média do aluno: %2.f \n",media);
    }
  }else{
    printf("Nota inválida!");
  }

  return 0;
}

