#include<stdio.h>
#include<conio.h>

void main()
{
 int i;
 char str[20],ch;

 printf("enter str:");
 gets(str);

 for(i=0;str[i]!='\0';i++)
 {
  if(str[i]>='a' && str[i]<='z')
  {
   str[i]-=32;
  }
  else if(str[i]>='A' && str[i]<='Z');
 {
  str[i]+=32;
 }
}
 puts(str);
 getch();
}
