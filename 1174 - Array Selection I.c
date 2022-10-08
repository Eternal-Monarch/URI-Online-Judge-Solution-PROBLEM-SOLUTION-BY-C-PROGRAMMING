#include <stdio.h>

int main()
{
    double a[100];
    int number,i;
    int counter=0;
    for(i=0;i<100;i++)

        scanf("%lf",&a[i]);

    for(i=0;i<100;i++)
    {
        if(a[i]<=10.0)
           // if(A[i]<=10.0)
    //counter=counter+i;
    //printf("A[%d] = %.1lf\n",i, A[i]);
   // printf("A[%d] =  %.1f\n",i,a[i]) ;
    printf("A[%d] = %.1lf\n",i, a[i]);
    }
        // for(i=0;i<4;i++)
        // {
        //   printf("A[%d] =  %.1f",counter,(float)array[i]) ;
        // 
        return 0;
}
