#include<stdio.h>
void main()
{
  int a,b,c,max;
  printf("\n enter 3 numbers");
  scanf("%d%d%d",&a,&b,&c);
  max=a;
  if(b>max)
  {
     max=b;
  }
  if(c>max)
  {
     max=c;
  }
  printf("\n %d is greatest",max);
}

