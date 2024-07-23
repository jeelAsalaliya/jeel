#include<stdio.h>
#include<conio.h>

 int fact(int);
 void main()
 {
  int a,n;
  clrscr();

  printf("enter the number:");
  scanf("%d",&n);

  a=fact(n);

  printf("enter the factorial number:%d\n",a);
  getch();
 }
  int fact(int n)
  {
   if(n==1)
   {
    return(1);
   }
   else
   {
    return(n*fact(n-1));
   }
  }