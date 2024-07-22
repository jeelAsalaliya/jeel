#include<iostream.h>
#include<conio.h>

 class test
 {
  int a,b;
  public:
  void getdata()
  {
   cout<<"\n enter data to a,b";
   cin>>a>>b;
  }
   void display()
   {
    cout<<"\n value of a and b:";
    cout<<a<<"\t"<<b;
   }
   friend test operator *(int,test);
  };
   test operator *(int x,test t)
   {
    test tmp;
    tmp.a=x*t.a;
    tmp.b=x*t.b;
    return tmp;
   }
    void main()
    {
     test t1;
     t1.getdata();
     t1.display();
     test t2=2*t1;
     t2.display();
     getch();
    }