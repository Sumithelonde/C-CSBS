#include<stdio.h>
void main()
{
    float m,cm,km,inch,feet;
    printf("\n enter m");
    scanf("%f",&m);
    cm=m*100;
    km=m/1000;
    inch=cm/2.54;
    feet=m/12;
    printf("\n value in cm is %f",cm);
    printf("\n value in km is %f",km);
    printf("\n value in inches is %f",inch);
    printf("\n value in feet is %f",feet);
    
    
    
    
    
}
