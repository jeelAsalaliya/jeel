#include<iostream.h>
#include<conio.h>

class abc;
class xyz
{
 int x;
 public:
 void getdata()
 {
  cout<<"\n enter value to x:";
  cin>>x;
 }
  friend void max(xyz,abc);
};
  class abc
  {
   int x;
   public:
   void getdata()
   {
    cout<<"\n enter value to x:";
    cin>>x;
   }
    friend void max(xyz,abc);
  };
   void max(xyz a,abc b)
    {
     if(a.x>b.x)
	cout<<a.x;
     else
	cout<<b.x;
     }
     void main()
     {
      clrscr();
      xyz x1;
      abc a1;
      x1.getdata();
      a1.getdata();
      max(x1,a1);
      getch();
     }