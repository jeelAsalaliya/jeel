#include<stdio.h>
#include<conio.h>

 void main()
 {
  int fact(int);
  int n,ans;
  clrscr();

  printf("\n enter n:");
  scanf("%d",&n);

  ans=fact(n);
  printf("fact=%d",ans);
  getch();
 }
  int fact(int n)
  {
   if(n==1)
   {
    return 1;
   }
   else
   {
    return n*fact(n-1);
    }
   }