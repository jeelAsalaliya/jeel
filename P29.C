#include<stdio.h>
#include<conio.h>

void  main()
{
 char str[5][20];
 int i;
 clrscr();

 for(i=0;i<5;i++)
 {
  printf("\n enter string:");
  gets(str[i]);
 }
  for(i=0;i<5;i++)
  {
   printf("%s\n",str[i]);
  }
  getch();
 }