/*
leia um matrix 4x4, conte e escreva qauntos valores maiores que 10 ela possui.
*/

#include <stdio.h>
#include<stdlib.h>
int main(void) {
 
  int v1[4][4];
   int cont = 0 ;
  for(int c = 0; c<4;c++){
      for(int i = 0; i<4;i++){
      printf("linha %d coluna %d :",c+1,i+1);
      scanf("%d",&v1[c][i]);
    }
    
  }
  system("clear");
  for(int c = 0; c<4;c++){
   
      for(int i = 0; i<4;i++){
        if(v1[c][i]>10){
            printf(" | %i |\n",v1[c][i]);
          cont ++;
        }
      }
    
    }
 printf(" \n%d números maiores que 10",cont);
  
  
  return 0;
}