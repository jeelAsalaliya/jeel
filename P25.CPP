#include<iostream.h>
#include<conio.h>
#include<string.h>

 class student
 {
  int rno;
  char name[20];
  public:

  void getdata(int rollno,char name1[20])
  {
   rno=rollno;
   strcpy(name,name1);
  }
  void putdata()
  {
   cout<<"rollno="<<rno;
   cout<<"name="<<name;
  }
 };
  void main()
  {
   clrscr();
   student s1;
   int no;
   char name[20];
   cout<<"\n enter no";
   cin>>no;
   cout<<"\n enter name";
   cin>>name;
   s1.getdata(no,name);
   s1.putdata();
   getch();
  }