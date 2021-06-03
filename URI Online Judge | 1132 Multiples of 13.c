#include<stdio.h>
int main()
{
    int i;int p=5;
int a,b,c=0,d;
scanf("%d",&a);
scanf("%d",&b);
{
if(a<b)
{
for(i=a;i<=b;i++)
{
   if(i%13!=0)
    {
//printf("%d ",i);
c+=i;
   }

}
}
else
{
{
for(i=b;i<=a;i++)
{
   if(i%13!=0)
    {
//printf("%d ",i);
c+=i;
   }

}
}

}
}
printf("%d\n",c);

return 0;
}
