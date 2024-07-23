#include<stdio.h>
#include<conio.h>

void main()
{
 int a[3][3],i,j,sum=0;
 clrscr();

 for(i=0;i<3;i++)
 {
   for(j=0;j<3;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
/* for(i=0;i<3;i++)
 {
  sum+=a[i][3-i-1];
 }*/

 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   if(i==j)
   {
    sum+=a[i][3-i-1];
   }
  }
 }
 printf("%d",sum);
 getch();
}
