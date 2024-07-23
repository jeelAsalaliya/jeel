#include<stdio.h>
#include<conio.h>

void main()
{
 int i,j,cnt=0;
 char str[5][20];
 clrscr();

 for(i=0;i<5;i++)
 {
  printf("\n enter any strings:");
  gets(str[i]);
 }
 for(i=0;i<5;i++)
 {
  for(j=0;str[i][j]!='\0';j++)
  {
   cnt++;
  }
  printf("\n %s=%d",str[i],cnt);
  cnt=0;
 }
 getch();
}