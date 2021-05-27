#include <stdio.h>
int
main () 
{
    while(1)
    {
  int Sum = 0;
  
int i, j, k;
  
int temp;
  
int a, b;
  
scanf ("%d %d", &a, &b);

  if(a< 0||b<0 ||a==0||b==0)
    
        {
           break;
       
        }
  
  
      if (a > b)
    {
      
temp = b;
    
b = a;
    
a = temp;
    
for (i = a; i <= b; i++)
{
    printf("%d ",i);
    Sum+=i;
    
}
{
printf("Sum=%d",Sum);
    
    
}



  
  
  
      
return 0;
  
}
}
}


