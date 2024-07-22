#include<iostream.h>
#include<conio.h>

void main()
{
 int a=5,b=15;
 clrscr();
 cout<<"\n before swapping:"<<endl;
 cout<<"a:="<<a<<",\nb:="<<b<<endl;

 a=a+b;
 b=a-b;
 a=a-b;

 cout<<"\n after swapping:"<<endl;
 cout<<"a:="<<a<<",\nb:="<<b<<endl;
 getch();
}