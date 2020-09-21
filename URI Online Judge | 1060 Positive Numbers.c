#include <stdio.h>

int
main ()
{
  int k = 0, i, a,c, d, e, f;
  float b;


  for (i = 1; i <= 6; i++)
    {
      scanf ("%f", &b);
      if (b > 0)

	k++;
    }
  printf ("%d valores positivo\ns", k);


  return 0;

}
