#include<stdio.h>
#include<conio.h>
void main()
{
 char str[15];
 int cnt=0,i;
 clrscr();

 printf("enter any string:");
 gets(str);

 for(i=0;str[i]!='\0';i++)
 {
  cnt++;
 }
 printf("%d",cnt);
 getch();
}
