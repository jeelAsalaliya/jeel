#include<iostream.h>
#include<conio.h>

 int count=0;
 class alpha
 {
  public:
  alpha()
  {
   count++;
   cout<<"\n no of object is created=="<<count;
  }
  alpha()
  {
   cout<<"\n no of object destroyed=="<<count;
   count--;
  }
 };
  void main()
  {
   cout<<"\n enter main";
   alpha a1,a2,a3,a4;
   {
    cout<<"\n enter block1:";
    alpha a5;
   }
   {
    cout<<"\n enter block2:";
    alpha a6;
   }
    cout<<"\n again in main:";
    getch();
   }