#include<stdio.h>
#include<conio.h>

void main()
{
 char str[15],ch;
 int i;
 clrscr();

 printf("\n enter string");
 gets(str);

 printf("\n enter char to search");
 scanf("%c",&ch);

 for(i=0;str[i]!='\0';i++)
 {
  if(str[i]==ch)
  {
   printf("char is found");
  }
   else
   {
    printf("char is not found");
   }
  }
  getch();
 }