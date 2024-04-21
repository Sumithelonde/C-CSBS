#include<stdio.h>
void main()
{
    int num;
    printf("\n ENTER A NUMBER");
    scanf("%d",&num);
    if(num>0)
    {
        printf("\n %d is positive",num);
    }
    else
    {
        if(num<0)
        {
            printf("\n %d is negative",num);
        }
        else
        {
            printf("\n %d is equal to zero",num);
        }
        
    }
}