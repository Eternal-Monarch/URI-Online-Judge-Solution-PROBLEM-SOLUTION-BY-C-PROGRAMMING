#include <stdio.h>
int
main ()
{ int i;
  int a;
  int  m=0;
  scanf("%d",&a);
  for(i=1;i<=a;i++)
   if(i%2!=0)
printf("%d\n",i);

  return 0;
}
