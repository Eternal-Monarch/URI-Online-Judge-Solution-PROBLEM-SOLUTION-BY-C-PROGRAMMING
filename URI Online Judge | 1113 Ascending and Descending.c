#include <stdio.h>
int
main ()
{   
    int a,b;
    while(1)
{
   scanf("%d %d",&a,&b);
    if(a==b)
        break;
    if(a>b){
    printf("Decrescente");
    }
    else if(a<b)
       {
           printf("Crescente");
       }
}
return 0;
}













