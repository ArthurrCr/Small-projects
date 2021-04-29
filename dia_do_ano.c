#include <stdio.h>
#include <conio.h>
int dia_do_ano(int dia, int mes, int ano)
{
    int erro = 0,contador,j,cont, bissexto =0;
    int meses[12]={31,28,31,30,31,30,31,31,30,31,30,31};

    for(contador = 1; contador <= mes; contador++)
  {     for(j = 1; j <= meses[contador]; j++){
            cont++;
  }
  }
    erro = meses[mes] - dia;
    cont = cont - erro;


    if(ano%4==0 && ano%100!=0){
        bissexto = 1;
        cont = cont + bissexto;
}
    return(cont);
}
int main(void){

    int d,m,a,cont;
    printf("Digite o dia: ");
    scanf("%d",&d);
    printf("\nDigite o mes: ");
    scanf("%d",&m);
    printf("\nDigite o ano: ");
    scanf("%d",&a);

    cont = dia_do_ano(d,m,a);
    printf("\nQuantidade de dias %d", cont);
    getch();
    return 0;

}
