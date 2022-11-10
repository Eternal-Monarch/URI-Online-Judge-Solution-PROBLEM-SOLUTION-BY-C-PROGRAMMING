#include<stdio.h>
int main()
{
    int i,j;
    int n;
    int m;
    int k;
    for(;;)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        int array[n][n];
        for(i=0; i<n; i++)

        {
            m=i+1;//i==0
            k=2;

            for(j=0; j<=i; j++,m--)
            {

                array[i][j]=m;//we just replacing the value of m

            }
for(j=i+1;j<n;j++,k++)

        {
            array[i][j]=k;
        }



        }




          for(i = 0;i < n;i++){
            for(j = 0;j < n;j++){
                if(j==0)printf("%3d",array[i][j]);
                else printf(" %3d",array[i][j]);
            }printf("\n");
        }printf("\n");
    }



        return 0;
    }

