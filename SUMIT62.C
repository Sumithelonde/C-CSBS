#include<stdio.h>
void main()
{ 
    int i,j;
    for(i=101;i>=97;i--)
    {
        for(j=97;j<=i;j++)
        {
            printf("%c",i);
           
        }
        printf("\n");
    }
}