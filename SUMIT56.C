
#include<stdio.h>
void main()
{ 
    int i,j;
    for(i=2;i<=6;i++)
    {
        for(j=1;j<=5;j++)
        {
            (i%2==0?printf("$"):printf("#"));
           
        }
        printf("\n");
    }
}