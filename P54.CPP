#include<iostream.h>
#include<conio.h>

 class swap
 {
  int x,y;
  public:
  void getdata()
  {
   cout<<"enter x and y values:\n\n";
   cin>>x>>y;
  }
  void putdata()
  {
   cout<<"\n\n x::y data:"<<x<<y<<endl;
  }
  void swapping(swap &s2)
  {
   int temp=x;
   x=s2.x;
   s2.x=temp;
   temp=y;
   y=s2.y;
   s2.y=temp;
  }
 };

  void main()
  {
   clrscr();
   swap sw1,sw2;
   sw1.getdata();
   sw2.getdata();
   sw1.swapping(sw2);
   cout<<"\n s1 object:";
   sw1.putdata();
   cout<<"\n s2 object:";
   sw2.putdata();
   getch();
  }