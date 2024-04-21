#include<stdio.h>
void main()
{
    int a,b,c;
    printf("\n ENTER 3 NUMBERS");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("\n a is greatest ");
    }
    else
    {
        if(b>c)
        {
            printf("\n b is greater");
        }
        else
        {
            printf("\n c is greater");
        }
    }
}