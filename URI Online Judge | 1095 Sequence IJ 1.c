
#include <stdio.h>

int main()
{
    int i,j;
    //for(i=1;i<38;i=i+=3)
    //for increment or decrement in a certain rate use this j+=5,means that j will be increase in just 5 by 5
    for(i=1,j=60;j>=0;j-=5,i+=3)
   { printf("I=%d J=%d\n",i,j);
   }
   // printf("");

    return 0;
}
