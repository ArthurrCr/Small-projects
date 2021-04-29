#include <stdio.h>
#include <string.h>
#include <conio.h>

int main (void){

    char palavra1[100], palavra2[100];
    int cont=0,i,j,t1,t2;

    printf("Digite uma palavra : ");
    gets(palavra1);
    printf("\nDigite outra palavra : ");
    gets(palavra2);

    t1 = strlen(palavra1);
    t2 = strlen(palavra2);


    if(t1 == t2){
        for(i=0 ; i<t1; i++){
            for(j=0; j<t2; j++){
                if(palavra1[i]== palavra2[j]){
                    cont++;
                    palavra2[j] = 0;
                    break;
                }
            }

        }
    if(cont == t1){
        printf("\nE um anagrama");
    }
    else{
        printf("\nNao e um anagrama");
    }
    }
    else{
        printf("\nNao e um anagrama");
    }
    return 0;

}
