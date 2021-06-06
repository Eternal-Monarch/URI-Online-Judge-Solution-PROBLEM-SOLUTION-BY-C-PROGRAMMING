#include<stdio.h>
int
main () 
{
  
int a, b, c, d;
  
int counter = 0;
  
int i, j;
  
 
while (1)
    
    {
      
scanf ("%d", &a);	//4
      if (a == 0)
	
break;
      
 
if (a % 2 != 0)
	
a++;
      
 
for (i = 1; i <= 5; i++)	//4
	{
	  
 
//counter=a;//4
	    //a+=2;
	    
counter += a;
	  
a += 2;
	  
	    // counter+=a;//4
	
}
      
 
printf ("%d\n", counter);	//under the while loop the print function
      counter = 0;
    
}
  
 
 
//printf("%d\n",counter);
//counter=0;
    return 0;

}


