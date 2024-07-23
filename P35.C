#include<stdio.h>
#include<conio.h>

void main()
{
 int i,j;
 char a[5][20],b[5][20],c[5][20];
 clrscr();

 for(i=0;i<5;i++)
 {
  printf("\n enter str");
  gets(a[i]);
 }
 for(i=0;i<5;i++)
 {
  printf("\n enter str");
  gets(b[i]);
 }
 for(i=0;i<5;i++)
 {
  strcat(a[i],b[i]);
  strcpy(c[i],a[i]);
 }
 for(i=0;i<5;i++)
 {
  puts(c[i]);
 }
 getch();
}