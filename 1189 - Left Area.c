#include<stdio.h>
int main()
{
    int number, i,j;
    char character;
    scanf("%s",&character);

    double array[12][12];
    int row=1;
    double sum=0;
    int x=11,o=1;

    for(i=0; i<12; i++) //row
    {
        for(j=0; j<12; j++) //colum
        {
            scanf("%lf",&array[i][j]);
        }

    }


    for(i=0; i<5; i++)//row
    {
        for(j=o; j<x; j++)//colum
        {
            sum+=array[j][i];
        }

        x--;
        o++;

    }







    if(character=='S')
        printf("%.1lf\n",sum);
   else
        printf("%.1lf\n",sum/30.0);

    return 0;
}
