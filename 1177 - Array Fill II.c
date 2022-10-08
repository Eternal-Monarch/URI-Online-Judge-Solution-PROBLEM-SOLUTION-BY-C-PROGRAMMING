#include<stdio.h>
int main()
{
    int number;
    int i;
    int sum=0;
    //int array[1000];
    scanf("%d",&number);
    for(i=0;i<1000;i++)
    {
        printf("N[%d] = %d\n",i,sum);
        sum++;
        if(sum==number)
            sum=0;
    }
return 0;
}
