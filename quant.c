#include <stdio.h>

int main (void){

    char palavra[100];
    int i, erro =0, tot;

    printf("Digite uma frase: ");
    fgets(palavra,101,stdin);

    for ( i=0 ; palavra[i]!= '\n'; i++){
        if ( !erro && palavra[i]!=' '){
            erro = 1;
            tot += 1;
        }
        else if (erro && palavra[i]==' ')
            erro = 0;

    }
    printf("O numero de palavras eh: %d \n", tot);

    return 0;


}
