#include<stdio.h>
int main()
{
       int i;
       float S=0,j=1.00;
       for(i=1;i<=100;i++)
       {
           S+=(1/j);
           j++;
       }



      printf("%.2lf\n",S);
    return 0;

}

