#include<stdio.h>
int main()
{
    int a,n,b,c,d=0;
    int x=1;
    int i,j=0;
    int line=0;
    scanf("%d %d",&a,&n);
    while(n<0 ||n==0)
    scanf("%d",&n);
    for(i=0;i<n;i++)
   {

    j=j+i+a;
   }
    printf("%d\n",j);



return 0;

}

