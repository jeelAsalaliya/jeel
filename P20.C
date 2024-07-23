#include<stdio.h>
#include<conio.h>

void main()
{
 int a[3][3],i,j,sum=0;
 clrscr();

 printf("matrix");
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
   sum+=a[i][j];
  }
 }
 printf("\n %d",sum);
 getch();
}