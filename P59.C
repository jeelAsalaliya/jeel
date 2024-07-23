#include<stdio.h>
#include<conio.h>

 void count(int n,int x[])
 {
  int i,cnt=0;

  for(i=0;i<n;i++)
  {
   if(x[i]%2!=0)
   {
    cnt++;
   }
  }
  printf("\n number of odd elements=%d",cnt);
 }
  void main()
  {
   int a[10],i,n;



   printf("\n enter number of elements of array;");
   scanf("%d",&n);

   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
   count(n,a);
   printf("\n thank you!!!");
   getch();
  }