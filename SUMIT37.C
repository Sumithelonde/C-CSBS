#include<stdio.h>
void main()
{
    int a,b,c,rt1,rt2,x;
    printf("\n ENTER VALUE FOR A,B,C");
    scanf("%d%d%d",&a,&b,&c);
    x=b*b-(4*a*c);
    if(x>0)
    {
        printf("\N ENTRERED VALUE HAS ROOTS REAL & EQUAL");
    }
    if(x==0)
    {
        printf("\n ENTERED VALUE HAS ROOTS EQUAL");
    }
    if(x<0)
    {
        printf("\nENTERED VALUE HAS ROOTS IMNAGIANARY AND UNEQUAL");
    }
}
\