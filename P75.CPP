#include<iostream.h>
#include<conio.h>

 class space
 {
  int x,y,z;
  public:
  void getdata(int a,int b,int c)
  {
   x=a;
   y=b;
   z=c;
  }
   void display()
   {
    cout<<x<<" "<<y<<" "<<z<<" ";
    cout<<"\n";
   }
   friend void operator -(space &s1)
   {
    s1.x=-s1.x;
    s1.y=-s1.y;
    s1.z=-s1.z;
   }
  };
  void main()
  {
   clrscr();
   space s;
   s.getdata(10,-20,30);
   s.display();
   -s;
   s.display();
   getch();
  }