#include<stdio.h>
int
main ()
{
  int a, b, c, d;
  scanf ("%d", &a);
  b = a % 3600 / 60;		//minute
  c = (a % 60);			//second
  d = (a / 3600);		//hour
  printf ("%d:%d:%d\n", d, b, c);
  return 0;
}
