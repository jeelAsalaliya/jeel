#include<iostream.h>
#include<conio.h>

 void main()
 {
  clrscr();
  int num=10,*ptr;
  ptr=&num;

  void *gp;
  gp=ptr;

  cout<<"\n value at ptr:"<<*ptr;
  cout<<"\n value at num using generic pointer=="<<*(int*)gp;
  float no=123.123411;
  gp=&no;
  cout<<"\n value at num using ..."<<(*(float*)gp);
  getch();
 }