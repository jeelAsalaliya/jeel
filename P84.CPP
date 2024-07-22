#include<iostream.h>
#include<conio.h>

 class time
 {
  int hour;
  int min;
  public:
  time(){
  hour=min=0;
 }
  time(int x)
  {
   hour=x/60;
   min=x%60;
  }
   void display()
   {
    cout<<"\n hour=="<<hour;
    cout<<"\n min=="<<min;
   }
  };
   void main()
   {
    clrscr();
    time t1;
    int duration=90;
    t1=duration;
    t1.display();
    getch();
   }