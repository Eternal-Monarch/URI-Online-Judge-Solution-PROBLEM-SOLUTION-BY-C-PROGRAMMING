#include<stdio.h>
int main()
{
       int i;
       float S=0,j=1.00;
       for(i=1;i<=39;i+=2)//i everytime increased with the 2 and 2
       {
           S+=(i/j);
           j=j+j;//everytime j going to be double and this value store in the j
           //j++;
       }



    printf("%.2f\n",S);
    return 0;

}

