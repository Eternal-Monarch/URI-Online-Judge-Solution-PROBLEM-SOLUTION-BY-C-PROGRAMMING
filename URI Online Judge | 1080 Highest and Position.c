#include <stdio.h>
int main()
{
int large=0;
int x, i;
int array[100];
for(i=0;i<100;i++)
{
scanf("%d",&array[i]);//scanning every value
}
for(i=0;i<100;i++)
{

    if(array[i]>large)
    {


        large=array[i];
        x=i;
}
}
printf("%d\n%d\n",large,x+1);


return 0;
}

