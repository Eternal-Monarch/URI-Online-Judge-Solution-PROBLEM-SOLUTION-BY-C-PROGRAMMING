#include<stdio.h>
int main()
{
   double A,B,c,d,MEDIA;
   scanf("%lf", &A);
   scanf("%lf",&B);
   scanf("%lf",&c);
   scanf("%lf",&d);
   MEDIA = (A * B - c * d);
   //x=MEDIA/3;
   //y=(A*2+B*3+c*5)/(10);
   printf("DIFERENCA = %.0lf\n",MEDIA);

   return 0;
}
