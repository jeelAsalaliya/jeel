#include<iostream.h>
#include<conio.h>

 class static1
 {
  static int count;
  int number;
  public:


  void getdata(int x)
  {
   number=x;
   count++;
  }
  void display_static()
  {
   cout<<"\n static members::"<<count;
  }
   void displaydata()
   {
    cout<<"\n data member:"<<number;
   }
  };int static1::count;
   void main()
   {
    clrscr();
    static1 a,b,c;
    a.display_static();
    b.display_static();
    c.display_static();
    a.getdata(0);
    b.getdata(1);
    c.getdata(2);
    a.display_static();
    b.display_static();
    c.display_static();
   getch();
  }