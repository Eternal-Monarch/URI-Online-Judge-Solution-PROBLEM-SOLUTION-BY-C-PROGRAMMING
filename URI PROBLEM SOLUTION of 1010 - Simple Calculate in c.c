#include <stdio.h>

int
main ()
{ 
int a,b,x,y;
float c,d,e,mul1,mul2;
scanf("%d%d",&a,&b);
scanf("%f",&c);
mul1=b*c;
scanf("%d%d",&x,&y);
scanf("%f",&d);
mul2=y*d;
printf("VALOR A PAGAR: R$ %.2f\n",mul1+mul2);
return 0;
}
