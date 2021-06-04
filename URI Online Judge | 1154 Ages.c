#include<stdio.h>
int main()
{
        int c,d=1;
        int e=0;
        double f;
        double count=0;
        int i;

        while(1)
        {
        scanf("%d",&c);
        if(c<0)
            break;

else
{
    e+=c;
    count++;
}
        }
       f=e/count;
      printf("%.2lf\n",f);
    return 0;

}

