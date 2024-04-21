#include<stdio.h>
void main()
{
    int i,num,count;
    printf("\n ENTER ANY NUMBER");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    if(num%i==0)
    {
        count++;
    }
    {
       if(count==2)
       {
           printf("\n %d IS A PRIME NUMBER",num);
       }
       else
       {
           printf("\n %d IS A COMPOSITE NUMBER",num);
       }
    }
    
}