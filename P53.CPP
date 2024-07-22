#include<iostream.h>
#include<conio.h>

class time
{
 int hour,min;
 public:

 void getdata(int x,int y)
 {
  hour=x;
  min=y;
 }
 void display()
 {
  cout<<"hours:"<<hour;
  cout<<"min:"<<min;
 }
  void add(time t1,time t2)
  {
   min=t1.min+t2.min;
   if(min>=60)
   {
    hour=min/60;
    min=min%60;
   }
   hour=hour+t1.hour+t2.hour;
  }
 };
  void main()
  {
   clrscr();
   time x,y,z;
   x.getdata(2,80);
   y.getdata(3,45);
   z.add(x,y);
   z.display();
   getch();
  }