#include <stdio.h>
int main()
{
     float average;
     int sum=0;
     int total=0;//as a counter
     float a,N[3];//N is the array
    while(1)
     {
         scanf("%f",&a);
         if(a>=0 && a<=10)
            {
            N[total]=a;
            total++;//for taking the next value
            }
         else
         printf("nota invalida\n");
         if(total>1)//when the index of the array of 1 is full then it will break,because we here only 2 value
         {
             break;
        }
        }
         average=(N[0]+N[1])/2.0;
         printf("media = %.2f\n",average);

return 0;
}
