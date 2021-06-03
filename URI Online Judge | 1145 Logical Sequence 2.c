#include<stdio.h>
int main()
{
    int a,b,c,d;
    int x=1;
    int i,j;
    int line;
    scanf("%d %d",&a,&b);
    line=b/a;
    d=a;
    for(i=1;i<=line;i++)//33 times this loop will be excuted
    {
        printf("%d",x);//first print the value is 1
        for(j=x+1;j<=d;j++)//this loop ia going to the 3
        printf(" %d",j);
        printf("\n");
        x +=a;
        d +=a;
    }
return 0;

}
