#include<stdio.h>
void main()
{
    int m1,m2,m3,m4,m5,total;
    float per;
    printf("\n ENTER 5 SUBJECT NUMBER");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    if(m1>=40&&m2>=40&&m3>=40&&m4>=40&&m5>=40)
    {
        printf("\n student is passed");
        total=m1+m2+m3+m4+m5;
        per=total/5.0;
        printf("\n total marks=%d",total);
        printf("\n percentage=%f",per);
    }
    else
    {
        printf("\n student is failed ");
    }
        
}
