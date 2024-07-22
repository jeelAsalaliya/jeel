#include<iostream.h>
#include<conio.h>\

 class emp
 {
  int emp_no;
  char name[20];
  public:
  void getdata();
  void putdata();
 };
 void emp::getdata()
 {
  cout<<"enter emp_no";
  cin>>emp_no;
  cout<<"enter name";
  cin>>name;
 }
  void emp::putdata()
  {
   cout<<"emp_no"<<emp_no;
   cout<<"name"<<name;
  }
  void  main()
  {
   clrscr();
   emp e1;
   e1.getdata();
   e1.putdata();
   emp e2;
   e2.getdata();
   e2.putdata();
   getch();
  }