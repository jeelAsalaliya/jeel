#include<iostream.h>
#include<conio.h>

 class bill
 {
  float unit;
  float amount;
  public:

  void getdata()
  {
   cout<<"\n enter the consumed unit:";
   cin>>unit;
  }
  void putdata()
  {
   if(unit<=100)
   {
    cout<<"\n amount is::150";
   }
   else if(unit>=101 && unit<=200)
   {
    amount=150+(unit-100)*1.50;
    cout<<"\n amount is::"<<amount;
   }
   else if(unit>=201 && unit<=300)
   {
    amount=200+(unit-100)*2.0;
    cout<<"\n amount is::"<<amount;
   }
   else if(unit>=301 && unit<=400)
   {
    amount=300+(unit-100)*2.50;
    cout<<"\n amount is::"<<amount;
   }
   else if(unit>=401 && unit<=500)
   {
    amount=400+(unit-100)*3.00;
    cout<<"\n amount is::"<<amount;
   }
   else if(unit>=500)
   {
    amount=450+(unit-100)*4.50;
    cout<<"\n amount is::"<<amount;
   }
   else
   {
    cout<<"\n thank you";
   }
  }
 };
  void main()
  {
   bill b1;
   clrscr();
   b1.getdata();
   b1.putdata();
   getch();
 }