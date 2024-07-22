#include<iostream.h>
#include<conio.h>

 class employee
 {
  char name[20];
  int yoj;
  char addr[50];
  public:
 void getdata()
 {
  cout<<"\n enter employee name:";
  cin>>name;
  cout<<"\n enter join of year:";
  cin>>yoj;
  cout<<"\n enter address:";
  cin>>addr;
 }
  void putdata()
  {
   cout<<"\n"<<name<<"\t\t"<<yoj<<"\t\t"<<addr<<"\n";
  }
 };
  void main()
  {
   employee e1,e2,e3;
   clrscr();
   e1.getdata();
   e2.getdata();
   e3.getdata();
   cout<<"\nname\t\t"<<"year of join\t"<<"address\t\t";
   e1.putdata();
   e2.putdata();
   e3.putdata();
   getch();
 }