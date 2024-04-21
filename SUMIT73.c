#include<stdio.h>
void main()
{
    int f,i,num;
     printf("\n ENTER ANY NUMBER : ");
              scanf("%d",&num);
              f=1;
              i=1;
              do
              {
                  f=f*i;
                  i++;
              }while(i<=num);
             printf("\n %d ",f);
}