#include<stdio.h>
int main()
{
    double number;
    int i;
    double sum=0;
    //int array[1000];
    scanf("%lf",&number);
   // printf("N[1] = %.4lf\n",number);
    for(i=0;i<100;i++)
    {

     printf("N[%d] = %.4lf\n",i,number);
     number/=2.0;


    }
return 0;
}
