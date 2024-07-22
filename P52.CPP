#include<iostream.h>
#include<conio.h>

 void swap(int &num1,int &num2)
 {
  int t;
  t=num1;
  num1=num2;
  num2=t;
 }
  void main()
  {
   int a=5,b=10;
   cout<<"\n before swapping"<<"\n a="<<a<<"\n b="<<b<<endl;
   swap(a,b);
   cout<<"\n after swapping"<<"\n a="<<a<<"\n b="<<b<<endl;
   getch();
  }