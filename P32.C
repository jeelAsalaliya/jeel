#include<stdio.h>
#include<conio.h>

 void main()
 {
  int i,j;
  char str[5][20],newstr[5][20];
  clrscr();

  for(i=0;i<5;i++)
  {
   printf("enter any strings:");
   gets(str[i]);
  }
  for(i=0;i<5;i++)
  {
   strcpy(newstr[i],str[i]);
   puts(newstr[i]);
 }
  getch();
 }