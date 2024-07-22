#include<iostream.h>
#include<conio.h>

 class student
 {
  int rno;
  char name[20];
  public:

  void getdata()
  {
  cout<<"\n enter rollno:";
  cin>>rno;
  cout<<"\n enter name:";
  cin>>name;
  }
  void putdata()
  {
   cout<<"\n rnono:"<<rno;
   cout<<"\n name:"<<name;
  }
 }s;

  void main()
  {
   clrscr();
   student s1;
   cout<<"enter data in s1 object:";
   s1.getdata();
   s1.putdata();
   s.getdata();
   s.putdata();
   getch();
 }