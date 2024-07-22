#include<iostream.h>
#include<conio.h>

void main()
{
 int n,range;
 clrscr();

 cout<<"enter an integer:";
 cin>>n;
 cout<<"enter range:\n";
 cin>>range;



 for(int i=1;i<=range;i++)
 {
  cout<<n<<"*"<<range<<"="<<n*i<<endl;
 }
 getch();
}