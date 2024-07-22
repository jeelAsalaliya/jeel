#include<iostream.h>
#include<conio.h>

 void main()
 {
  int s,m,h;
  clrscr();

  cout<<"enter seconds::";
  cin>>s;
  h=s/3600;
  m=(s-(h*3600))/60;
  s=s-((h*3600)+(m*60));

 cout<<"hh:mm:ss="<<h<<":"<<m<<":"<<s;
  getch();
 }