
#include<iostream.h>
#include<conio.h>

 void main()
 {
  clrscr();
  int x=10;
  int &y=x;

  cout<<"value of x=="<<x;
  cout<<"\nvalue of x using reference variable y"<<y;
  getch();
}

