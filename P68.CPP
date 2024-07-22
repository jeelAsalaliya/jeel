
#include<iostream.h>
#include<conio.h>

class test
{
 int x,y;
 public:
 test(int a,int b)
 {
  x=a;
  y=b;
 }
 void display()
 {
  cout<<"\n value of x=="<<x;
  cout<<"\n value of y=="<<y;
 }
};
 void main()
 {
  clrscr();
  test t1=test(10,20);
  test t2(40,50);
  t1.display();
  t2.display();
  getch();
 }