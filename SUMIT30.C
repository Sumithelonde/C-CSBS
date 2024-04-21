#include<stdio.h>
void main()
{
  int ch;
  printf("\n ENTER ANY UPPERCASE CHARACTER");
  scanf("%c",&ch);
  if(ch>=65&&ch<=90)
  {
     ch==ch+32;
  }
  printf("\n the lowercase value is %c",ch+32);
