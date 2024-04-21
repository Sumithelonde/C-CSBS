#include<stdio.h>
void main()
{ 
    int i,num;
    printf("\n ENTER NUMBER ");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf("\n%dx%d=%d",num,i,num*i);
    }
    
}