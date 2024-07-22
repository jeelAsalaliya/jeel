#include<iostream.h>
#include<conio.h>
#include<math.h>

class triangle
{
 public:
 void area(float a,float b,float c);
 void perimeter(float a,float b,float c);
};

 void triangle::area(float a,float b,float c)
 {
  float s=((a+b+c/2.0));
  a=sqrt(s*(s-a)*(s-b)*(s-c));

  cout<<"area of triangle is:"<<a<<"sq.units\n";
 }

  void triangle::perimeter(float a,float b,float c)
  {
   cout<<"perimeter of triangle is:"<<a+b+c<<"sq.units\n";
  }

   void main()
   {
    triangle tr1;
    clrscr();
    float side1=3,side2=4,side3=5;
    tr1.area(side1,side2,side3);
    tr1.perimeter(side1,side2,side3);
    getch();
   }