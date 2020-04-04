#include<stdio.h>
int main()
{ char str[20];
    float a,b,c,sh;

scanf("%s",str);

scanf("%f",&a);
scanf("%f",&b);
sh=(float)((b*15)/100);
printf("TOTAL = R$ %.2f\n",sh+a);
return 0;
}
