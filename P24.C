#include<stdio.h>
#include<conio.h>

void main()
{
int a[3][3],b[3][3],c[3][3],i,j,k;
int r1,r2,c1,c2;
clrscr();

 printf("enter first matrix read:");
 scanf("%d",&r1);
 printf("enter first matrix read:");
 scanf("%d",&c1);

 for(i=0;i<r1;i++)
{
 for(j=0;j<c1;j++)
 {
  scanf("%d",&a[i][j]);
 }
}

 printf("enter second matrix read:");
 scanf("%d",&r2);
 printf("enter second matrix read:");
 scanf("%d",&c2);

 for(i=0;i<r2;i++)
 {
  for(j=0;j<c2;j++)
  {
   scanf("%d",&b[i][j]);
  }
 }
  c[0][0]=0;
  for(i=0;i<r1;i++)
  {
   for(j=0;j<c2;j++)
   {
    for(k=0;k<c1;k++)
    {
     c[i][j]+=a[i][k]*b[k][j];
    }
   }
  }
  for(i=0;i<r1;i++)
  {
   for(j=0;j<c2;j++)
   {
    printf("%d\t",c[i][j]);
    }
    printf("\n");
  }
   for(i=0;i<r1;i++)
   {
    for(j=0;j<c2;j++)
    {
     c[i][j]=0;
    }
   }
  getch();
 }


