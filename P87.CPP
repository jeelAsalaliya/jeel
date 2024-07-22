#include<iostream.h>
#include<conio.h>

class cm;
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
 int returnm()
 {
  return meter;
 }
};
 class cm
 {
  int cmeter;
  public:
  cm(){}
  cm(int x)
  {
   cmeter=x;
  }
  void display()
  {
   cout<<cmeter;
  }
  cm(m m1)
  {
   cmeter=m1.returnm()*100;
  }
 };
  void main()
  {
   m m1;
   cm cm1;
   m1=5;
   cm1=m1;
   cout<<"\n";
   cm1.display();
   getch();
  }