#include <stdio.h>
int main()
{
     float avg;
     int sum=0,x;
     int total=0;//as a counter
     float a,N[3];//N is the array
     //scanf("%d",&a);
    while(1)
        {
          while(1)
            {
             scanf("%f",&a);
            if(a>=0 && a<=10)
            {

                N[total]=a;
                total++;
            }


            else

            printf("nota invalida\n");
            if(total>1)




                break;


         }
            avg=(N[0]+N[1])/2.0;


            printf("media = %.2f\n",avg);
                        total=0;
            while(1)
            {
                scanf("%d",&x);
                printf("novo calculo (1-sim 2-nao)\n");
                if(x==1 ||x==2)
                break;

            }
            if(x==1)continue;
            else
                break;

    }
return 0;
}
