
#include<iostream.h>
#include<conio.h>

 int &max(int &x,int &y)
 {
  if(x>y)
	return x;
  else
	return y;
 }
  void main()
  {
   clrscr();
   int a=5,b=10;
   max(a,b)=-1;
   cout<<"\n value of a:"<<a;
   cout<<"\n value of b:"<<b;
   getch();
  }