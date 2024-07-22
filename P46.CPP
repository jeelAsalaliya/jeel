#include<iostream.h>
#include<conio.h>

const int size=3;
class student
{
 int rno;
 char name[20];
 int mark[size];
 int tot;
 public:

 void getdata()
 {
  cout<<"\n enter rollno:";
  cin>>rno;
  cout<<"\n enter name:";
  cin>>name;
  cout<<"\n enter marks of three subjects::";

  for(int i=0;i<size;i++)
   cin>>mark[i];
   tot=0;
 }
  void total()
  {
   for(int i=0;i<size;i++)
   {
    tot=tot+mark[i];
   }
  }
  void putdata()
  {
   cout<<"\n rno no:"<<rno;
   cout<<"\n name::"<<name;
   cout<<"\n total:"<<tot;
  }
 }s;
  void main()
  {
   clrscr();
   student s1;
   s1.getdata();
   s1.total();
   s1.putdata();
   s.getdata();
   s.total();
   s.putdata();
   getch();
 }