#include<stdio.h>
int main()
{int i;int p=5;
int a,b,c,d;
scanf("%d",&a);
scanf("%d",&b);
if(a < b)
    {

        for (i = a+1 ; i < b; i++)
        {
                if (i % 5 == 2 || i % 5 == 3)
                {
                     printf("%d\n", i);
                }
            }
    }
    else if(a>b)
    {
    for (i = b+1 ; i < a; i++)
        {
                if (i % 5 == 2 || i % 5 == 3)
                {
                     printf("%d\n", i);
                }
            }


    }



return 0;
}
