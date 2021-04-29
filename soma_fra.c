#include<stdio.h>
#include<conio.h>
float divisor (float a, float b){

    float div;
    div = a/b;
    return(div);

}
float soma(float x, float y){

    float resultado;
    resultado = x + y;
    return(resultado);
}

int main (void){

    float nx1, ny1, nx2, ny2, div,div2, resultado;
    printf("Digite o primeiro valor:");
    scanf("%d/%d",&nx1,&ny1);
    printf("Digite o segundo valor:");
    scanf("%d/%d", &nx2,&ny2);
    div = divisor(nx1,ny1);
    div2 = divisor(nx2,ny2);
    resultado = soma(div,div2);
    printf("Soma das fracoes = %.2f\n",resultado);
    getch();
    return 0;


}
