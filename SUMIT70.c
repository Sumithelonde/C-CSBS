#include<stdio.h>
void main()
{
    int d,num,rev,ori;
    printf("\n ENTER ANY NUMBER : ");
              scanf("%d",&num);
              rev=0;
              ori=num;
              while(num>0)
              {
                  d=num%10;
                  rev=rev*10+d;
                  num=num/10;
              }
              if(ori==rev)
              {
                  printf("\n %d is a palindrome num ",ori);
              }
              else
              {
                  printf("\n %d is not a palindrome number",ori);
              }
}