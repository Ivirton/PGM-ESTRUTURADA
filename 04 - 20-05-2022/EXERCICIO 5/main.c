/*
FAÇA UM PROGRAMA QUE LEIA 1O INTEIROS E IMPRIMA A MÉDIA 
*/
#include <stdio.h>
int main(void) {
int nun = 0,media = 0;
for(int c= 1;c <=10; c++){
    printf("digite %d° valor: ",c);
    scanf("%d",&nun);
    media = media + nun;
} 
    printf("A MÉDIA É %d",media/10);
    return 0;
}