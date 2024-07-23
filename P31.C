#include<stdio.h>
#include<conio.h>

void main()
{
 int i,j,cnt;
 char str[5][20],search[20];
 int r,temp=0;
 clrscr();

 for(i=0;i<5;i++)
 {
  printf("\n enter any strings:");
  gets(str[i]);
 }
 gets(search);

 for(i=0;i<5;i++)
 {
  r=strcmp(str[i],search);
  if(r==0)
  {
   temp=1;
   break;
  }
 }
 if(temp==1)
 {
  printf("found");
 }
 else
 {
  printf("not found");
 }
 getch();
}x