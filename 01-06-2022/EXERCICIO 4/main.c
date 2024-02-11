#include <stdio.h>
int main() {
int size = 9;
int numeros[size],par=0,contador=0;
  int vetorPares[size];
  for(int i=0;i<size;i++){
      printf("digite um valor:");
      scanf("%d",&numeros[i]);
    
  }
  for(int i=0;i<size;i++){
      if(numeros[i]%2==0){
        vetorPares[i] = numeros[i];
        contador++;
      }
  }
 
  printf("O total de números pares é:%d",contador);

return 0;
}