#include<stdio.h>
#include<conio.h>

 void convert();
 void main()
 {
  int n;
  clrscr();
  convert(n);
  getch();
 }
  void convert()
  {
   int i,n,a[10];
   printf("\n enter the convert num:");
   scanf("%d",&n);

   for(i=0;n>0;i++)
   {
    a[i]=n%2;
    n=n/2;
   }
    printf("binary given num:");
    for(i=i-1;i>=0;i--)
    {
     printf("%d",a[i]);
    }
   }
