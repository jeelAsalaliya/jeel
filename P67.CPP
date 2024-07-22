
#include<conio.h>
#include<iostream.h>

 class test
 {
  int x,y;
  public:
  void getdata(int a,int b)
  {
   x=a;
   y=b;
  }
  test()
  {
   x=0;
   y=0;
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
   test t1;
   t1.display();
   t1.getdata(10,20);
   t1.display();
   getch();
  }