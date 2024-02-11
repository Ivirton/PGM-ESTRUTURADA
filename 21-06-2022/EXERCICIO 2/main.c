#include <stdio.h>
#include <stdlib.h>
/*2-Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com O os demais elementos. Escreva ao final a matriz obtida. 

*/
int main(void) {
  int val[5][5];
  int aux = 0; //contador até 6  
  
  for(int c = 0; c<5 ;c++){
     for(int i = 0; i<5 ;i++){
       if(aux == 6 || aux == 0){
         //se a posição do vetor for 6 ou 0 adiciono 1 ao vetor
          val[c][i] = 1;
          aux = 0; // sempre o vetor e redefinido depois de chegar a 6
       }else{//se não satisfazer a op anterios add 0 ao vetor
          val[c][i] =0;
       }
        aux++; //depois de completar o clico ele incrementa 
     }
  }
  system("clear");
  for(int c = 0; c<5 ;c++){
     for(int i = 0; i<5 ;i++){
       printf(" %d ",val[c][i]);
     }
     printf(" \n");
  }
  //printf("%d",6%12);
  return 0;
}