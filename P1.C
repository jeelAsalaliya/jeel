#include<stdio.h>
#include<conio.h>

void main()
{
 int a[5],i;
 clrscr();

 printf("enter any elements;");
 scanf("%d",&i);

 for(i=0;i<5;i++)
 {
  printf("\n enter any val:");
  scanf("\n %d",&a[i]);
 }
 for(i=0;i<5;i++)
 {
  if(a[i]%2==1)
  {
   printf("\n %d",a[i]);
  }
 }
 getch();
}