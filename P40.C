#include<stdio.h>
#include<conio.h>

 void main()
 {
  int max(int []);
  int i,b,a[5];
  clrscr();

 for(i=0;i<5;i++)
 {
  printf("\n enter no[%d]",i+1);
  scanf("%d",&a[i]);
 }
 b=max(a);
 printf("%d=max",b);
 getch();
}
 int max(int a[])
 {
 int i,max=0;

 max=a[0];
 for(i=0;i<5;i++)
 {
  if(a[i] > max)
  {
   max=a[i];
 }
}
return max;
}
