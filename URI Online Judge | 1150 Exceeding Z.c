#include<stdio.h>
int main()
{
        int a,n,b,c=0,d=1;
        int x=1;
        int i,j=0;
        int line=0;
        scanf("%d %d",&a,&b);
        while(b<=a)
        scanf("%d",&b);
        for(i=a;i<=b;i++)
        {
            c+=i;//all value of the array
            if(c>b)
            break;
            d++;

        }
        printf("%d\n",d);
        return 0;

}

