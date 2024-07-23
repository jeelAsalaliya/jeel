#include<stdio.h>
#include<conio.h>

void main()
{
 int a[5],i,max=0;
 clrscr();

 for(i=0;i<5;i++)
 {
  printf("enter val");
  scanf("%d",&a[i]);
 }
 max=a[0];
 for(i=0;i<5;i++)
 {
  if(max<a[i])
  {
   max=a[i];
  }
 }
  printf("max=%d",max);
 getch();
}