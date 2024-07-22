#include<iostream.h>
#include<conio.h>

 class employee
 {
  int eno;
  char ename[20];
  public:

  void getdata()
  {
   cout<<"enter eno:\n";
   cin>>eno;
   cout<<"enter ename:\n";
   cin>>ename;
  }
  void putdata()
  {
   cout<<"\n eno:"<<eno;
   cout<<"\n ename:"<<ename;
  }
 }e;
 void main()
{
 clrscr();
 employee e1;
 cout<<"enter data in e1 object:";
 e1.getdata();
 e1.putdata();
 getch();
}