#include <stdio.h>
int
main ()
{ int i;
  int  m=0;
  int a, count = 0;
  for(i=0;i<5;i++)
  {
      scanf("%d",&a);

          if(a%2==0)
            {
                //m+=a;//store the all positive value in the m
                count++;//for be used to count the positive number
            }

  }

  printf("%d valores pares\n",count);
  //printf("%.1lf",m/count);
  return 0;
}
