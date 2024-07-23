#include<stdio.h>
#include<conio.h>

void main()
{
 char str[5][20];
 int i,j;
 clrscr();

 for(i=0;i<5;i++)
 {
  printf("entrt any string:");
  gets(str[i]);
 }
 for(i=0;i<5;i++)
 {
  for(j=0;str[i][j]!='\0';j++)
  {
   if(str[i][j] >='a' && str[i][j] <='z' )
   {
    str[i][j]-=32;
   }
   else
   {
    str[i][j]+=32;
   }
 }
}
 for(i=0;i<5;i++)
 {
  printf("\n %s",str[i]);
 }
 getch();
}