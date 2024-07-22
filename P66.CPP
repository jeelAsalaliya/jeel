#include<iostream.h>
#include<conio.h>

 void f()
 {
  class myclass
  {
    int i;
    public:
     void getdata(int n)
     {
      i=n;
     }
      int putdata()
      {
       return i;
      }
     }ob;
     ob.getdata(100);
     cout<<ob.putdata();
  }
   void  main()
   {
    clrscr();
    f();
    getch();
   }