#include<stdio.h>
void main()
{ 
    int i,j,k=97;
    for(i=97;i<=101;i++)
    {
        for(j=101;j>=i;j--)
        {
            printf("%C ",k++);
           
        }
        printf("\n");
    }
}