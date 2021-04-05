#include <stdio.h>
int
main ()
{ int i;
  int  m=0;
  int a, positive=0,count = 0,negative=0;
  int pount=0;
  for(i=0;i<5;i++)
  {
      scanf("%d",&a);

          if(a%2==0)
            {
                //m+=a;//store the all positive value in the m
                count++;//for be used to count the positive number
            }
            if(a%2!=0)
            {
                pount++;
            }
            if(a>0)
            {
                positive++;
            }
            if(a<0)
            {
                negative++;
            }


  }

  printf("%d valor(es) par(es)\n",count);
  printf("%d valor(es) impar(es)\n",pount);
  printf("%d valor(es) positivo(s)\n",positive);
  printf("%d valor(es) negativo(s)\n",negative);

  //printf("%.1lf",m/count);
  return 0;
}
