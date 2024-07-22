
#include<iostream.h>
#include<conio.h>

 class cm;
 class m
 {
  int meter;
  public:
  void getdata()
  {
   cout<<"\ enter data to meter:";
   cin>>meter;
  }
   void display()
   {
    cout<<"\n meter:"<<meter;
   }
   m add(cm);
  };
  class cm
  {
   int centim;
   public:
   void getdata()
   {
    cout<<"\n enter data to centimeter:";
    cin>>centim;
   }
   void display()
   {
    cout<<"\n centimeter:"<<centim;
   }
    friend m m::add(cm);
  };
   m m::add(cm cm1)
   {
    m met;
    met.meter=meter+(cm1.centim/100);
    return met;
   }
    void main()
    {
     m met1,met2;
     cm cmet1;
     met1.getdata();
     cmet1.getdata();
     met1.display();
     cmet1.display();
     met2=met1.add(cmet1);
     met2.display();
     getch();
    }