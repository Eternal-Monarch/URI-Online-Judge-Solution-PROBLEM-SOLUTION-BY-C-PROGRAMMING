#include<stdio.h>
int main()
{
    int a,b,c,d;
    int counter=0;
    int i,j;

scanf("%d",&a);
for(i=1;i<=a;i++)//for loop of the scan the value
{
    scanf("%d %d",&b,&c);
    if(b%2==0)//4
    b++;//5

        for(j=0;j<c;j++)
        {
            counter+=b;
            b+=2;


        }
        //counter+=j;
        printf("%d\n",counter);
counter =0;




}

return 0;
}
