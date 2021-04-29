#include <stdio.h>
#include <conio.h>
float fator ( float x ){

    float fat;
    for(fat = 1; x >1; x = x- 1){
        fat = fat * x; }
    return(fat);

}
int main(void)
{

    float contador,fat,n;
    float e;
    printf("Digite um numero : ");
    scanf("%f", &n);

    for(contador = 1; contador <= n; contador++)
  {     fat = fator(contador);
        e += 1/fat;


  }
    printf("\nValor de e aproximado %.5f",e+1);
    getch();
    return(0);
}
