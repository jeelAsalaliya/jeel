#include<iostream.h>
#include<conio.h>

class test
{
 int x,y;
 public:
 void getdata()
 {
  cout<<"\n enter value in x and y:";
  cin>>x>>y;
 }
   friend
   int add(test t)
  {
   return(t.x+t.y);
  }
 };
  void main()
  {
   clrscr();
   test t1;
   t1.getdata();
   int tot=add(t1);
   cout<<tot;
   getch();
 }