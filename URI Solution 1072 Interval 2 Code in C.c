#include <stdio.h>
int
main ()
{
  int a, b, e, c, d, result, i, in = 0, out = 0;
  scanf ("%d", &a);		//the number of integer numbers x that will be readed
  for (i = 0; i < a; i++)
{
    scanf ("%d", &b);
  
    if (b >= 10 && b <= 20)
      {
	in ++;
      }
    else
      {
	out ++;
      }
  }


  printf ("%d in\n", in);
  printf ("%d out\n", out);

  return 0;
}
