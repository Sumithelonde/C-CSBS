#include<stdio.h>
void main()
{
  int num;
  printf("\n ENTER ANY NUMBER");
  scanf("%d",&num);
  (num%2==0?printf("\n %d is a even number",num):printf("\n %d is a odd number",num));
}
