#include <stdio.h>
int main() 
{
     int a,b,c,d,e;
     scanf("%d %d %d %d",&a,&b,&c,&d);
     if(c>a &&d>b)
     {  
         printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(c-a),(d-b));
     }
     else if(a<c&&b>d)
     {
          printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n",(60-(b-d)));
     }
     else if(a=b&&b==c&&c==d)
     {
         printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
     }
     return 0;
}
