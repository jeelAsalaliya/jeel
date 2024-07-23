#include<stdio.h>
#include<conio.h>

 int armstrong(int);
 int main()
 {
  int num,p,n;
  clrscr();

  printf("enter a num:");
  scanf("%d",&num);

  p=armstrong(n);
  if(p==0)
  {
   printf("%d you have entered armstrong number:",num);
  }
  else
  {
   printf(" %d you have entered not armstrong number:",num);
  }
  return 0;
 }
  int armstrong(int p)
  {
   int c=0,s=0,q=0;
   int  num=p;

   while(num!=0)
   {
    c=num%10;
    q=c*c*c;
    s=s+q;
   }
  if(s==p)
  {
   return 0;
  }
  else
  {
   return 1;
  }
 }