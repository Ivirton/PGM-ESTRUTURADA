/*50 implemente um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade do ano atual*/

#include <stdio.h>
#include <time.h>
int anoNascimento = 0;
int main(void) {
  printf("Informe sua data de nascimento: ");
  scanf("%d",&anoNascimento);
 printf("Sua idade é %d",(2022-anoNascimento));
  return 0;
}