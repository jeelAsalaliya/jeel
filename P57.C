#include<stdio.h>
#include<conio.h>

 int fibonacci(int);
 void main()
 {
  int num,i;
  clrscr();

  printf("enter the number of elements to be in the series:");
  scanf("%d",&num);

  fibonacci(num);

  for(i=0;i<num;i++)
  {
   printf("%d\t",fibonacci(i));
  }
  getch();
 }
  int fibonacci(int num)
  {
   if(num==0)
   {
    return 0;
   }
   else if(num==1)
   {
    return 1;
   }
   else
   {
    return fibonacci(num-1)+fibonacci(num-2);
   }
  }