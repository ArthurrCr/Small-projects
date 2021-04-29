#include <stdio.h>
#include <string.h>

int convert(int x){

    int con;
    int cont = 0;
    while (cont < 12){
        cont += 1;
        con = x + 1;
        x = con;
        if(con == 12){
            con = 1;
            x = 0;
}       if(con ==24){
            con = 1;
            x = 0;
}
    }return (con);


}
int main (void){

    int h, m, con;
    printf("Digite um horario: ");
    scanf("%d:%d", &h,&m);
    con = convert(h);
    printf("Resposta: %d:%d",con,m);
    getch();
    return 0;
}
