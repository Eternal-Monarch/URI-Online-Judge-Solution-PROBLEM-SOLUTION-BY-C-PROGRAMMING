#include<stdio.h>
int main()
{

    int a,b,c;
    double area;
    int s;
 for(;;)

    {
scanf("%d",&a);

    if(a==0)
    break;
    scanf("%d %d",&b,&c);
    area=a*b*100/c;
    //int area2=area/c;
    for(s=1;s*s<=area;s++);
    s--;

    printf("%d\n",s);


}
return 0;
}
