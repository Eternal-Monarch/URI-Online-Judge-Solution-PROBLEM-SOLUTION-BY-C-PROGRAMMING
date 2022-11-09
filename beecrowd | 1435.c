#include<stdio.h>
int main()
{
    int i;
    int n;
    int j;
    int hn;
    int a;
    int b;
    int l;

    for(;;)
    {

        scanf("%d",&n);

        if(n==0)
            break;
        int array[n][n];

        hn=n/2;
        if(n%2==1)
            hn++;
        a=0;
        b=n-1;

        for(l=1; l<=hn; l++)
        {
            for(i=a; i<=b; i++)
            {
                for(j=a; j<=b; j++)
                {
                    array[i][j]=l;
                }
            }
            a++;
            b--;

        }

        //printing part

        for(i = 0; i < n; i++)
        {
            for(j = 0; j < n; j++)
            {
                if(j == 0)printf("%3d",array[i][j]);
                else printf(" %3d",array[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
