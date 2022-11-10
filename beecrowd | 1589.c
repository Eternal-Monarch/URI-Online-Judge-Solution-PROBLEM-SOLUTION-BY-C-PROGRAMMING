#include<stdio.h>
int main()
{
int i=0;
int n;
int a;
int b;
scanf("%d",&n);
while(i<n)
{
scanf("%d %d",&a,&b);
printf("%d\n",a+b);
i++;
}
return 0;
}
