#include<iostream.h>
#include<conio.h>
#include<math.h>

class dm
{
 public:
 double mi,cm;
};
 class db
 {
  public:
  double feet,inch;
  friend void add(dm,db);
 };
  double d1,d2;
  cout<<"\n enter the distance in meter:";
  cin>>DM.mi;
  cout<<"\n enter the distance in centimeter:";
  cin>>DM.cm;
  cout<<"\n enter the distance in feet:";
  cin>>DB.feet;
  cout<<"\n enter the distance in inch:";
  cin>>DB.inch;

  d1=DM.mi+(DB.feet)/3.281;
  d2=DM.cm+(DB.inch)*2.54;
  cout<<"\n \n meter+feet="<<d1<<"meter";
  cout<<"\n \n cm+inch="<<d2<<"centimeter";
 }
  void main()
  {
   clrscr();
   dm DM
   db DB;
   add(DM,DB);
   getch();
  }