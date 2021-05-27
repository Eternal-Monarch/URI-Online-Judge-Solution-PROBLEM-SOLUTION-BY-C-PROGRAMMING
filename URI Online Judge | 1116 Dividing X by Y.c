#include <stdio.h>
int
main ()
{
    while(1)
    {
int i,a,b;
int x;
scanf("%d",&x);
for(i=1;i<=x;i++){
scanf("%d %d",&a,&b);
if(a>0 && b<0)

printf("%.1f\n",(double)a/b);
if(a<0 && b==0)

    printf("divisao impossivel\n");

if(a==0 && b>0)

    printf("0.0\n");

if(a==0 && b>0)
{


   break;

}


}
return 0;
}
}



