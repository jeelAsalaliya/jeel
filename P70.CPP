#include<iostream.h>
#include<conio.h>

 class test
 {
  int x,y,z;
  public:
  test()
  {
   x=y=z=0;
  }
  test(int a)
  {
   x=y=z=a;
  }
  test(int a,int b,int c=0)
  {
   x=a;
   y=b;
   z=c;
  }
  test(test &t)
  {
   x=t.x;
   y=t.y;
   z=t.z;
  }
   void display()
   {
    cout<<"\n value of x=="<<x;
    cout<<"\n value of y=="<<y;
    cout<<"\n value of z=="<<z;
   }
  };
   void main()
   {
    clrscr();
    test t,t5;
    test t1(10);
    test t2=t1;
    test t3(40,50);
    t.display();
    t1.display();
    t2.display();
    t3.display();
    test t4(t1);
    t4.display();
    t5=t3;
    t5.display();
    getch();
   }