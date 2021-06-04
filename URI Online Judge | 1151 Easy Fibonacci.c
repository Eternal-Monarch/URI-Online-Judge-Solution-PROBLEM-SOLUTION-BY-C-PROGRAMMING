#include<stdio.h>
int main()
{
        int a=0,b=1,c,d;
        int i;
        scanf("%d",&c);
        for(i=1;i<=c-1;i++)//4 times it will be excuted
        {   printf("%d ",a);
            d=a+b;//1
            a=b;//b==0
            b=d;//b==0 and d is replace his place with b
        }
         printf("%d\n",a);


        return 0;

}

