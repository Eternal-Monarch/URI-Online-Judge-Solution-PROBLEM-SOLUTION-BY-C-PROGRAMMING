#include<stdio.h>
int 
main()
{int a;int month;int date;int x;int ano,mes,dia;
int year;
scanf("%d",&a);
ano=(a/365);
mes=(a%365)%30;
dia=(a%365)/30;
printf("%d ano(s)\n",ano);
printf("%d mes(es)\n",dia);
printf("%d dia(s)\n",mes);
return 0;
}
