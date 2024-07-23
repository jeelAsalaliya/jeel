#include<stdio.h>
#include<conio.h>
 void main()
 {
  int a[3][3],i,j;
  clrscr();

  printf("enter matrix");
  scanf("%d",&a[i],&a[j]);

  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
    scanf("%d",&a[i][j]);
   }
  }
  printf(" matrix is");
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
    printf("%d",a[i][j]);
   }
  printf("\n");
 }
 getch();
}