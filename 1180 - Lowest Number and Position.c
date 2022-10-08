#include<stdio.h>
int main()
{
int number;
int sum;
int i;
scanf("%d",&number);
int array[number];
for(i=0;i<number;i++)
{
    scanf("%d",&array[i]);
}
int min=array[0];
for(i=0;i<number;i++)
{
    if(array[i]<min)

        {
            min=array[i];
        sum=i;
        }
}
printf("Menor valor: %d\n",min);
printf("Posicao: %d\n",sum);
return 0;
}
