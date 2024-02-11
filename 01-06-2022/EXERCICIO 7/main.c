/*
 FAZER UM PROGRAMA QUE LER 5 VALORES EM SEGUIDA MOSTRAR TODOS OS VALORES LIDOS JUNTAMENTE COM O MAIOR, O MENOR E A MEDIA DOS VALORES 
  */

#include <stdio.h>

int main(void) {
  int size = 5;
  int valores[size],maior = 0,menor = 0,media = 0;

  for(int c =  0; c<size; c++){
    printf("Digite %d° valor:",c+1);
    scanf("%d",&valores[c]);
    media = (media + valores[c]);
    if(maior < valores[c]  ){
      maior = valores[c];
      
    }else {
      menor = valores[c];
    }
   
  }
    printf("\n");
     for(int c = 0;c<size;c++){
       printf("valor[%d] = %d \n",c,valores[c]);
     }
    printf("\n");
    printf(" Média:%d \n Menor:%d \n Maior:%d ",(media/size),menor,maior);
    return 0;
}