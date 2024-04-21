#include<stdio.h>
void main()
{
    int a,b,c;
    printf("\n ENTER 3 NUMBERS ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("\n %D IS GREATEST",a);
        }
        else
        {
            printf("\n %d is GREATEST",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("\n %d is GREATEST",b);
        }
        else
        {
            printf("\n %d is GREATEST ",c);
            
        }
    }
}