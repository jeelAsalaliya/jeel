#include<iostream.h>
#include<conio.h>

class test
{
 int x,y;
 public:
 void getdata()
 {
  cout<<"\n enter x and y";
  cin>>x>>y;
 }
  void display()
  {
   cout<<"\n value of x and y";
   cin>>x>>y;
  }
   friend test operator +(test a,test b)
   {
    test t;
    t.x=a.x+b.x;
    t.y=a.y+b.y;
    return t;
   }
  };
   void main()
   {
    clrscr();
    test t1,t2;
    t1.getdata();
    t2.getdata();
    test t3=t1+t2;
    t3.display();
    getch();
   }