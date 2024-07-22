#include<iostream.h>
#include<conio.h>

class test
{
 int a;
 public:
 int b;
 void getdata()
 {
  cout<<"enter value to a and b:";
  cin>>a>>b;
 }
  void show()
  {
   cout<<endl<<b<<endl;
  }
  int geta()
  {
   return a;
  }
 };
  class t:private test
  {
   int c;
   public:
   void add()
   {
    getdata();
    c=geta()+b;
   }
   void display()
   {
    show();
    cout<<endl;
    cout<<c;
   }
  };
   void main()
   {
    clrscr();
    t t1;
    t1.add();
    t1.display();
    getch();
   }