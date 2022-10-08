#include<stdio.h>
int main()
{
    int array[20];
    int i;
    int number;
    int number2;
    array[0]=0;
    array[1]=1;
    for(i=2; i<20; i++)
        array[i]=array[i-2]+array[i-1];

        scanf("%d",&number);
        for(i=0;i<number;i++)
        {
            scanf("%d",&number2);
            printf("Fib(%d) = %d\n",number2,array[number2]);

        }


        return 0;


}
