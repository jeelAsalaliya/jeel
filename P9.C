#include<stdio.h>
#include<conio.h>

void main()
{
 char str[15],c='a';
 int cnt=0,i;
 clrscr();

 printf("\n enter string:");
 gets(str);

 for(i=0;str[i]!='\0';i++)
 {
  if(str[i]==c)
  {
   cnt++;
  }
 }
 printf("%d",cnt);
 getch();
}