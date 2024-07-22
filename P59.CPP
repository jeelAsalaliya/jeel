#include<iostream.h>
#include<conio.h>

 class student
 {
  public:
  double marks;

  student(double m)
  {
   marks=m;
  }
 };
  void calculate_average(student s1,student s2)
  {
   double average=(s1.marks+s2.marks)/2;
   cout<<"average marks:"<<average;
  }
   void main()
   {
    student student1(88,0);
    student student2(56,0);
    clrscr();
    calculate_average(student1,student2);
    getch();
   }