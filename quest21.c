#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int *range(int inicio, int fim, int passo){
    int i=0,j,size=0,k;
    int *p;

    for(j=inicio;j<fim;j+=passo){
        size++;
    }
    p = malloc(size);

    if(p == NULL){
        printf("Erro, falha no malloc\n");
        exit(1);
    }

    for(inicio;inicio+(i*passo)<fim;){
        k =inicio+(i*passo);
        p[i]=k;
        i++;
    }
    printf("{");

    for(i=0;i<size;i++){
        printf("%d",p[i]);
        if(i!= size-1){
            printf(",");
        }
    }
    printf("}");

    return 0;
}


int main(void){
    int inicio,fim,passo;
    int *vetor;
    printf("Valor inicio:");
    scanf("%d",&inicio);

    printf("Valor fim:");
    scanf("%d",&fim);

    printf("Valor passo:");
    scanf("%d",&passo);

    vetor = *range(inicio,fim,passo);

    printf("%d",vetor);


    return 0;

}
