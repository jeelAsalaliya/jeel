
#include<iostream.h>
#include<conio.h>

 int x=10;
 void main()
 {
  clrscr();
  int x=20;

  cout<<"\n within main="<<x;
  cout<<"\n accessing global variable="<<::x;
  {
   int x=30;
   cout<<"\n within main"<<x;
   cout<<"\n accessing global variable="<<::x;
  }
  getch();
}