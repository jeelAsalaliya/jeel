#include<iostream.h>
#include<conio.h>

 class emp
 {
  int emp_no;
  char name[20];
  float basic;
  float ta;
  float da;
  float ptax;
  float gross;
  float net;
  public:

  void getdata()
  {
   cout<<"\n enter emp_no";
   cin>>emp_no;
   cout<<"\n enter name:";
   cin>>name;
   cout<<"\n enter basic:";
   cin>>basic;
   cout<<"\n enter ta da ptax";
   cin>>ta>>da>>ptax;
  }
  void calnet()
  {
   gross=basic+ta+da;
   net=gross-ptax;
  }
  void display()
  {
   cout<<"\n emp_no="<<emp_no;
   cout<<"\n emp_name="<<name;
   cout<<"\n basic salary="<<basic;
   cout<<"\n gross salary="<<gross;
   cout<<"\n net salary="<<net;
   }
  };
   void  main()
   {
    clrscr();
    emp e1;
    e1.getdata();
    e1.calnet();
    e1.display();
    getch();
   }