#include<stdio.h>
void main()
{
  int yr;
  printf("\n ENTER ANY YEAR");
  scanf("%d",&yr);
  (((yr%100!=0&&yr%4==0)||(yr%400==0))?printf("%d is a leap year",yr):printf("%d is not leap year",yr));
}