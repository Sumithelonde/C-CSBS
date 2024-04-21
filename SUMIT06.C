#include<stdio.h>
void main()
{
    int a=5,b=7;
    printf("\n EFORE SWAPPING A=%d, B=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n AFTER SWAPPING A=%d , B=%d",a,b);
}
