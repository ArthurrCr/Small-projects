#include <stdio.h>


int main (void){

    int n, soma, maior, menor;

    printf("Digite um numero: ");
    scanf("%d", &n);
    soma = 0;
    maior = n;
    menor = n;
    while ( n!= 0){

        soma += n;

        printf("Digite um numero: ");
        scanf("%d", &n);

        if( n > maior){
            maior = n;
        }
        if ( n < menor && n!=0){
            menor = n;
        }
    }
    printf("\n Maior numero: %d", maior);
    printf("\n Menor numero: %d", menor);

}
