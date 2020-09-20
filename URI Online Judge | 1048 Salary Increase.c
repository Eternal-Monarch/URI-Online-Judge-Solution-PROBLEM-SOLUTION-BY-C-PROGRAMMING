#include<stdio.h>
int
main ()
{
  float a, b, c, d, e, f, g, h;
  scanf ("%f", &a);
  if (a >= 0 && a <= 400.00)
    {
      c = (a * 15) / (100) + a;
      printf ("Novo salario: %.2f\n", c);
      printf ("Reajuste ganho: %.2f\n", c - a);
      printf ("Em percentual: 15 %\n");
    }
    else if(a >= 400.01 && a <= 800.00)
    {
        c = (a * 12) / (100) + a;
      printf ("Novo salario: %.2f\n", c);
      printf ("Reajuste ganho: %.2f\n", c - a);
      printf ("Em percentual: 12 %\n");
    }
    else if(a >= 800.01 && a <= 1200.00)
    {
        c = (a * 10) / (100) + a;
      printf ("Novo salario: %.2f\n", c);
      printf ("Reajuste ganho: %.2f\n", c - a);
      printf ("Em percentual: 10 %\n");
    }
     else if(a >= 1200.01 && a <= 2000.00)
     {
        c = (a * 7) / (100) + a;
      printf ("Novo salario: %.2f\n", c);
      printf ("Reajuste ganho: %.2f\n", c - a);
      printf ("Em percentual: 7 %\n");
    }
    else 
      {
        c = (a * 4) / (100) + a;
      printf ("Novo salario: %.2f\n", c);
      printf ("Reajuste ganho: %.2f\n", c - a);
      printf ("Em percentual: 4%\n");
    }
    return 0;
     

}
