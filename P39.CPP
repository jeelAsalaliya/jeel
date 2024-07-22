
#include<iostream.h>
#include<conio.h>

 void interest(float,float,float inte=10);
 void main()
 {
  clrscr();
  interest(1000,2,15);
  interest(5000,5);
  getch();
}

 void interest(float pri,float year,float inte)
 {
  float interest=pri*year*inte/100;
  cout<<"\n simple interest="<<interest;
 }