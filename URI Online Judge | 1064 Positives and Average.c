#include <stdio.h>
int
main ()
{ int i;
  double m=0;
  double a, count = 0;
  for(i=0;i<6;i++)
  {
      scanf("%lf",&a);

          if(a>0)
            {
                m+=a;//store the all positive value in the m
                count++;//for be used to count the positive number
            }

  }

  printf("%.0lf valores positivos\n",count);
  printf("%.1lf",m/count);
  return 0;
}
