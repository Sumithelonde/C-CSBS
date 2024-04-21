#include<stdio.h>
void main()
{ 
    int d,num,rev;
    printf("\n ENTER NUMBER ");
    scanf("%d",&num);
    rev=0;
   while(num>0)
    {
        d=num%10;
        rev=rev*10+d;
        num=num/10;
    }
    printf("\n reverse=%d",rev);
    
}