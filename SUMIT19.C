#include<stdio.h>
void main()
{
    int d1,d2,d3,num,ori;
    printf("\n ENTER 3 digit NUMBERS ");
    scanf("%d",&num);
    ori=num;
    d1=num%10;
    num=num/10;
    d2=num%10;
    num=num/10;
    d3=num%10;
    if(d1>d2)
    {
        if(d1>d3)
        {
            printf("\n %d is greater",d1);
        }
        else
        {
            printf("\n %d is greater",d3);
        }
    }
    else
    {
        if(d2>d3)
        {
            printf("\n %d is greatest",d2);
        }
    }
}    