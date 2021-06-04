#include<stdio.h>
int main()
{
        int a=0,b=1,c,d=1;
        int i;
        scanf("%d",&c);
        for(i=c;i>=1;i--)//4 times it will be excuted
        {
            d*=i;
        }



printf("%d\n",d);

        return 0;

}

