#include<stdio.h>
int main()
{
    int i;
    int counter;
    int n;
    int level;
    int slug_number;
    while(scanf("%d",&n)!=EOF)
    {
        counter=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&slug_number);
            if(slug_number>counter)
                counter=slug_number;

        }
        if(counter<10)
            level=1;
        else if(counter<20)
            level=2;
              else if(counter>=20)
        level=3;

        printf("%d\n",level);
    }

    return 0;
}
