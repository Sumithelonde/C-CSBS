#include<stdio.h>
void main()
{
  int ch;
  printf("\n ENTER ANY CHARACTER");
  scanf("%c",&ch);
  if(ch>=65&&ch<=90)
  {
     printf("\n %c is a uppercase character",ch);
  }
  if(ch>=97&&ch<=122)
  {
      printf("\n %c is a lowercase character ",ch);
  }
  if(ch>=48&&ch<=57)
  {
      printf("\n %c is a digit",ch);
  }
  else
  {
      printf("\n %c is special symbol",ch);
  }
}