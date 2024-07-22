
#include<iostream.h>
#include<conio.h>

class test
{
 int x,y;
 public:
 void getdata()
 {
  cout<<"\n enter x and y:";
  cin>>x>>y;
 }
  void display()
  {
   cout<<"\n value of x and y:";
   cout<<x<<"\t"<<y;
  }
  test operator +(test a)
  {
   test t;
   t.x=x+a.x;
   t.y=y+a.y;
   return t;
  }
 };
  void main()
  {
   test t1,t2;
   t1.getdata();
   t2.getdata();
   test t3=t1+t2;
   t3.display();
   getch();
  }