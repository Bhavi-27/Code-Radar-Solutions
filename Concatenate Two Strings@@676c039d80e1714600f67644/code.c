#include<stdio.h>

void main(void)
{
  char str1[25],str2[25];
  int i=0,j=0;
  gets(str1);
  gets(str2);
  while(str1[i]!='\0')
  i++;
  while(str2[j]!='\0')
  {
    str1[i]=str2[j];
    j++;
    i++;
  }
  str1[i]='\0';
  printf("%s",str1);
}