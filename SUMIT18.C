#include<stdio.h>
void main()
{
    int a,b,c;
    printf("\n ENTER 3 NUMBERS ");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b)
    {
        if(a<c)
        {
            printf("\n %d IS smallest",a);
        }
        else
        {
            printf("\n %d is smallest",c);
        }
    }
    else
    {
        if(b<c)
        {
            printf("\n %d is smallest",b);
        }
        else
        {
            printf("\n %d is smallest ",c);
            
        }
    }
}