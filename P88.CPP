#include<iostream.h>
#include<conio.h>
class m;
class cm
{
 int centi;
 public:
 cm(){}
 cm(int x)
 {
  centi=x;
 }
  void display()
  {
   cout<<centi;
  }
 };
  class m
  {
   int meter;
   public:
   m(){}
   m(int x)
   {
    meter=x;
   }
   void display()
   {
    cout<<meter;
   }
   operator cm()
   {
    return cm(meter*100);
   }
  };
   void main()
   {
    clrscr();
    m m1;
    cm cm1;
    m1=1;
    cm1=m1;
    m1.display();
    cout<<"\n";
    cm1.display();
    getch();
   }