#include<stdio.h>
#include<conio.h>

void main()
{
 int a[3][3],i,j;
 clrscr();

 printf("matrix odd");
 gets(a);

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
   if(a[i][j]%2==1)
   {
    printf("%d",a[i][j]);
   }
  }
    printf("\n");
  }
  getch();
 }

