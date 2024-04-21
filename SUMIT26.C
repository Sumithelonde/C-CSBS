#include<stdio.h>
void main()
{
  int a,b,c,min;
  printf("\n enter 3 numbers");
  scanf("%d%d%d",&a,&b,&c);
  min=a;
  if(b<min)
  {
     min=b;
  }
  if(c<min)
  {
     min=c;
  }
  printf("\n %d is smallest",min);
}
