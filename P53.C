#include<stdio.h>
#include<conio.h>

 int prime(int);
 void main()
 {
  int n,p;
  clrscr();

  printf("enter any num:");
  scanf("%d",&n);

  p=prime(n);

  if(p==1)
  {
   printf("prime num:");
   }
   else
   {
    printf("not prime num:");
   }
   printf("%d",p);
   getch();
  }
   int prime(int n)
   {
    int i,flag=0;

     for(i=2;i<n;i++)
     {
      if(n%i==0)
      {
       flag=1;
       break;
      }
     }
      if(flag==1)
      {
       return 0;
      }
      else
      {
       return 1;
       }
     }
