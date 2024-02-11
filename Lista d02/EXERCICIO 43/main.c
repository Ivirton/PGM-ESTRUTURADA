/* 43 - Escreva um programa de ajuda para vendedores. A partir de u valor total lido, mostre
•	Total a pagar com desconto
•	O valor de casa parcela, no parcelamento de 3X sem juros;
•	A comissão do vendedor, no caso da  venda  ser a vista (5% sobre o valor com desconto)
•	A comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total)
*/
#include <stdio.h>

int main(void) {
  
  float valorTotal,
  valorParcelado3x,
  comissaoVista,
  comissaoParcelado,
  desconto = 0.1;
  
  printf("Valor total:");
  scanf("%f",&valorTotal);
  
  valorTotal -= desconto;
  valorParcelado3x = valorTotal/3;
  comissaoVista = valorTotal* 0.05;
  comissaoParcelado = valorTotal* 0.05;

  printf("Total pagar com Desconto: %0.2f \n",valorTotal);
  printf("Comissão a vista: %0.2f \n",comissaoVista);
  printf("Comissão Parcelado: %0.2f \n",comissaoParcelado);
  
  return 0;
}