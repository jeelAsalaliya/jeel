#include<iostream.h>
#include<conio.h>

 class distance
{
 private:
 int m,cm;
 public:
 void set_distance()
 {
  cout<<"enter m:";
  cin>>m;
  cout<<"enter cm:";
  cin>>cm;
 }
  void get_distance()
  {
   cout<<"distance is meter="<<m<<",centimeter="<<cm<<endl;
  }
   void add(distance d1,distance d2)
   {
    m=d1.m+d2.m;
    cm=d1.cm+d2.cm;
    m=m+(cm/100);
    cm=cm%100;
   }
  };
   void main()
   {
    distance d1,d2,d3;
    clrscr();
    d1.set_distance();
    d2.set_distance();
    d3.add(d1,d2);
    d3.get_distance();
    getch();
   }