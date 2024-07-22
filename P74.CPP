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
    void operator -()
    {
     x=-x;
     y=-y;
     z=-z;
    }
   };
    void main()
    {
     space s;
     s.getdata(10,-20,30);
     s.display();
     -s;
     s.display();
     getch();
    }