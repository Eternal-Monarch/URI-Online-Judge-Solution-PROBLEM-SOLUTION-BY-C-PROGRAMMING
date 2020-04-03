#include<stdio.h>
int
main ()
{
  char a;
  printf ("Enter the character");
  scanf ("%c", &a);
  {
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A'
	|| a == 'E' || a == 'I' || a == 'O' || a == 'U')
      {
	printf (" %c character is  vowel", a);
      }
    else
      {
	printf ("%c is not vowel", a);

      }

  }
//if(a=='A'||a=='E'||a=="I"||a=="O"||a=='U')

  return 0;
}
