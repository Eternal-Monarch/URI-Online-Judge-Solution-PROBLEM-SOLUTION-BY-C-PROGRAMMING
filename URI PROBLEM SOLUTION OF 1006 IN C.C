#include<stdio.h>
int main()
{
   double A,B,c,MEDIA ,x,y;
   scanf("%lf", &A);
   scanf("%lf",&B);
    scanf("%lf",&c);
   MEDIA = (A+B+c);
   x=MEDIA/3;
   y=(A*2+B*3+c*5)/(10);
   printf("MEDIA = %.1lf\n",y);

   return 0;
}
