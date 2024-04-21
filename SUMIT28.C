#include<stdio.h>
void main()
{
  int year;
  printf("\n ENTER YEAR");
  scanf("%d",&year);
  if(year%100==0)
  {
     if(year%400==0)
     {
        printf("\n it is a leap year");
     }
     else
     {
        printf("\n it is not a leap year");
     }
  }
  else
  {
     if(year%4==0)
     {
        printf("\n it is a leap year");
     }
     else
     {
        printf("\n it is not a leap year");
     }
  }
  }


