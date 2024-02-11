/*- Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos têm 10 elementos cada. Imprimir todos os conjuntos.
*/

#include <stdio.h>
#include<stdlib.h>

int main(void) {
   system("clear");
    int indice = 9;
    float dominio[indice];
    float imagem[indice];
  
  for(int c = 0;c<indice;c++){
    printf("Digite %d° valor:",c+1);
    scanf("%f",&dominio[c]);
    imagem[c] = (dominio[c]*dominio[c]);
    system("clear");
  }
   printf("Domínio --> imagem \n");
  for(int c = 0 ;c<indice;c++){
     
      printf("%.2f --> %.2f \n",dominio[c],imagem[c]);
  }
  return 0;
}