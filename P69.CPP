
#include<iostream.h>
#include<conio.h>

class test
{
 int x;
 public:
 test(int a)
 {
  x=a;
 }
 test(test &a)
 {
  x=a.x;
 }
  void display()
  {
   cout<<"\n value of x=="<<x;
  }
 };
  void main()
  {
   test t1(10);
   test t2(t1);
   t1.display();
   t2.display();
   getch();
  }