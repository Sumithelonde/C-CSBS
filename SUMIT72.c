#include<stdio.h>
void main()
{
    int f,i,num;
     printf("\n ENTER ANY NUMBER : ");
              scanf("%d",&num);
              f=1;
              i=1;
              while(i<=num)
              {
                  f=f*i;
                  i++;
              }
             printf("\n %d ",f);
}S