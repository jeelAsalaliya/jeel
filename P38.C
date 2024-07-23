#include<stdio.h>
#include<conio.h>

 void main()
 {
  static int a[10][10];
  int i,j,m,n,sum=0;
  clrscr();

  printf("enter any matrix:");
  scanf("%d %d",&m,&n);

  printf("enter co-...");
  for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
   {
    scanf("%d",&a[i][j]);
   }
  }
  for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
   {
    sum+=a[i][j];
   }
   printf("sum=%d\ row=%d\t",sum,i);
   sum=0;
  }
  for(j=0;j<n;j++)
  {
   for(i=0;i<m;i++)
   {
    sum+=a[i][j];
   }
   printf("sum=%d column=%d\t",sum,j);
   sum=0;
  }
  getch();
 }


