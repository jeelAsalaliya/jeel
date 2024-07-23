#include<stdio.h>
#include<conio.h>
void main()
{
 int a[3][3],i,j,temp=0;
 clrscr();

 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   if(i==j && a[i][j]!=1)
   {
    temp=1;
    break;
   }
   else if(i!=j && a[i][j]!=0)
   {
    temp=1;
    break;
   }
  }
  if(temp==1)
  break;
 }

  if(temp==1)
  {
   printf("not identify matrix:");
  }
  else
  {
   printf("identify matrix:");
  }
  getch();
 }