#include <stdio.h>
int
main ()
{
  int day,second,min,hour,hour1, hour2, day1, day2, minute1, minute2, second1, second2, N,dayconverter1,dayconverter2,finalday,finalhour,fianlminute,fianlsecond;
  scanf("%*s %d",&day1);
  scanf("%d %*s",&hour1);
  scanf("%d %*s",&minute1);
  scanf("%d",&second1);
  scanf("%*s %d",&day2);
  scanf("%d %*s",&hour2);
  scanf("%d %*s",&minute2);
  scanf("%d",&second2);
  dayconverter1=(hour1*3600)+(minute1*60)+(second1)+(86400*day1);
  dayconverter2=(hour2*3600)+(minute2*60)+(second2)+(86400*day2);
  N=dayconverter2-dayconverter1;
  day=N/86400;
  N=N%86400;
  hour=N/3600;
  N=N%3600;
  min=N/60;
  second=N%60;


  printf("%d dia(s)\n",day);
  printf("%d hora(s)\n",hour);
  printf("%d minuto(s)\n",min);
  printf("%d segundo(s)\n",second);


    return 0;
}
