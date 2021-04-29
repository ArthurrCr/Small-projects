#include <stdio.h>
#include <string.h>

int revert(int n){
   int resto=0;

   while(n>0)
   {
       resto = 10 * resto + n%10;
       n/=10;
   }
   return resto;
}

main()
{
   int num, rev;
   printf("Numero a inverter: ");
   scanf("%d",&num);
   rev = revert(num);
   printf("o numero invertido eh: %d", rev);
   getch();
}

