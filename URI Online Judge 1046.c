#include <stdio.h>
 
int main() {
 
   int a,b,keeper;
   scanf("%d %d",&a,&b);
   //we know that 1 Day means 24 Hours
   //Starting Point of day 12.00am
   keeper=(b-a);
   if(keeper<0)
   {
       printf("O JOGO DUROU %d HORA(S)\n",24+keeper);
   }
   else if(a==b)
   {
       printf("O JOGO DUROU 24 HORA(S)\n");
   }
   else if(a<b)
   {
       printf("O JOGO DUROU %d HORA(S)\n",keeper);
   }
    return 0;
}
