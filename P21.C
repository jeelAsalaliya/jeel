#include<stdio.h>
#include<conio.h>

void main()
{
 int a[3][3],i,j,max=0;
 clrscr();

 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 max=a[0][0];
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   if(max<a[i][j]);
   {
    max=a[i][j];
  }
 }
}
printf("\n max=%d",max);
getch();
}