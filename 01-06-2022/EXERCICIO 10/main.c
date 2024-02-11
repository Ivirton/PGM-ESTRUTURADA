/*9-Faça um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a intersecção entre os 2 vetores anteriores, ou seja, que contém apenas os números que estão em ambos os vetores. Não deve conter números repetidos.
*/
#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>
int main(void) {

  int A[10] = {2,3,6,7,4,2,3,6,7,4};
  int B[10] = {1,6,5,2,4,1,6,9,2,4};
  int C[10] = {0,0,0,0,0,0,0,0,0,0};
  
  for(int i = 0;i<10;i++){
     bool repetido = false;
     for(int j = 0;j<10;j++){
       if(A[i]==B[j]){
         if(C[i]==B[i]){
           repetido = true;
         }
           C[i] = A[i]; 
       } 
     } 
   if(C[i]!=0  ){
     
     printf("%d \n",C[i]);  
   }   
  }
  return 0;
}