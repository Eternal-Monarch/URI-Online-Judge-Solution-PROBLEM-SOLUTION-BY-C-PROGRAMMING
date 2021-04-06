#include <stdio.h>

int main()
{
int x, i;
double a,b,c;
scanf("%d",&x);
for(i=0;i<x;i++)
{
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    printf("%.1lf\n",(a*2.0+b*3.0+c*5.0)/10);
}

return 0;
}

