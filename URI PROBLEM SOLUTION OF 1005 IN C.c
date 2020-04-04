#include<stdio.h>
int main()
{
   double A,B,MEDIA ,x,y;
   scanf("%lf", &A);
   scanf("%lf",&B);
   MEDIA = (A+B);
   x=MEDIA/2;
   y=(A*3.5+B*7.5)/(3.5+7.5);
   printf("MEDIA = %.5lf\n",y);

   return 0;
}
