#include<stdio.h>
void main()
{
    int d1,d2,d3,num,sum,ori;
    printf("\n enter a 3 digit number");
    scanf("%d",&num);
    ori= num;
    d1=num%10;
    num=num/10;
    d2=num%10;
    num=num/10;
    d3=num%10;
    sum=d1+d2+d3;
    printf("\n sum of 3 digit number is %d", sum);
    
}
