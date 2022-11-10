#include<stdio.h>
int main()
{
int i;
int n;
int j;
int saver;
int array[72][72];
while(scanf("%d",&n)!=EOF)
{
saver=n-1;
 for(i=0;i<n;i++)
 {
 for(j=0;j<n;j++)
 {
     if(i==j)

 array[i][j]=1;
 else
    array[i][j]=3;
    if(j==saver)
        array[i][j]=2;
 }
 saver--;
 }





for(i=0;i<n;i++)
 {
 for(j=0;j<n;j++)
 {

 printf("%d",array[i][j]);
 }
 printf("\n");





}



}
return 0;
}
