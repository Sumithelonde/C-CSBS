#include<stdio.h>
void main()
{
    int d,num,sum,ori;
     printf("\n ENTER ANY NUMBER : ");
              scanf("%d",&num);
              sum=0;
              ori=num;
              while(num>0)
              {
                  d=num%10;
                  sum=sum+d*d*d;
                  num=num/10;
              }
              if(ori==sum)
              {
                  printf("\n %d is a armstrong num ",ori);
              }
              else
              {
                  printf("\n %d is not a armstrong number",ori);
              }
}