#include<iostream.h>
#include<conio.h>

 class average
 {
  public:
  static float calcaverage(float a,float b,float c)
  {
   return (a+b+c)/3;
  }
 };
  void main()
  {
   float a,b,c;
   clrscr();
   cout<<"enter a:";
   cin>>a;
   cout<<"enter b:";
   cin>>b;
   cout<<"enter c:";
   cin>>c;
   cout<<"\n the average is:"<<average::calcaverage(a,b,c);
   getch();
  }