
#include<iostream.h>
#include<conio.h>

 class student
 {
  int rno;
  char name[30];
  float marks[5];
  public:
  void getdata();
  void putdata();
 };

 void student::getdata()
 {
  cout<<"\n enter rollno:";
  cin>>rno;
  cout<<"\n enter name:";
  cin>>name;

  for(float i=0;i<5;i++)
  {
   cout<<"\n enter marks:";
   cin>>marks[i];
  }
 }
  void student::putdata()
  {
   float total=0;

   for(float i=0;i<5;i++)
   {
    total+=marks[i];
   }
   cout<<"\n total marks:"<<total;
  }

  void main()
  {
   clrscr();
   student s1;
   s1.getdata();
   s1.putdata();
   getch();
 }