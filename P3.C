
#include<stdio.h>
#include<conio.h>

void main()
{
 int a[5][5],i,j;
 clrscr();

 printf("enter the matrix:");
 scanf("%d",&a[i][j]);

 for(i=0;i<5;i++)
 {
  for(j=0;j<5;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 printf("the matrix is\n");
 for(i=0;i<5;i++)
 {
  for(j=0;j<5;j++)
  {
   printf("%d\t",a[i][j]);
  }
  printf("\n");
 }
 getch();
}

