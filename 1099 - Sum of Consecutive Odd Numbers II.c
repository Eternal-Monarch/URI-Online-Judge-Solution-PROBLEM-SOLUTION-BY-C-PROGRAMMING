#include<stdio.h>
int main()
{
    int j,temp;
int i,t;
int a,b;
int x=0;
scanf("%d",t);//test case

    for(i=0;i<t;i++)//outer loop
    {

       scanf("%d %d",&a,&b);//user input
       if(a>b)
        {temp=a;
       a=b;
       b=temp;
       }//swapping the 2 variable
       if(a%2==0)//if first number is even,delete 1 form it
            //deleting 1
            a--;
        a+=2;//add 2 number to move forward next 2 digit

    for(j=a;j<b;j+=2)
    {
        x+=j;//save the value into x
    }


    printf("%d ",x);
    x=0;
    }
return 0;


}
