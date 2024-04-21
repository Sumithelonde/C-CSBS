#include<stdio.h>
void main()
{
    int x,y;
    printf("\n enter 2 numbers");
    scanf("%d%d",&x,&y);
    if(x>0&&y>0)
    {
        printf("\n first quadrant");
    }
    if(x<0&&y>0)
    {
        printf("\n second quadrant");
    }
    if(x<0&&y<0)
    {
        printf("\n third quadrant");
    }
    if(x>0&&y<0)
    {
        printf("\n fourth quardant");
    }
    if(x==0&&y!=0)
    {
        printf("\ ya axis");
    }
    if(x!=0&&y==0)
    {
        printf("\ x axis");
    }
    if(x==0&&y==0)
    {
        printf("\n point lies on origin");
    }
}
