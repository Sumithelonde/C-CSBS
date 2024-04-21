#include<stdio.h>
void main()
{
    int bit,byte,kb,mb;
    printf("\n enter value in byte");
    scanf("%d",&byte);
    bit=byte*8;
    kb=byte/1024;
    mb=kb/1024;
    printf("\n %dbyte=%d bits", byte,bit);
    printf("\n %dbyte=%d kb", byte,kb);
    printf("\n %dbyte=%dmb", byte,mb);
 
}
