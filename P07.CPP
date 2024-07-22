#include<iostream.h>
#include<conio.h>

 void main()
 {
  int a,b,c;

  cin>>a>>b>>c;

  if(a>=b)
  {
   if(a>=c)
   {
    cout<<"a is largest number:\n"<<a;
   }
   else
   {
    cout<<"c is largest number:\n"<<c;
   }

  }
   else
   {
    if(b>=c)
    {
     cout<<"b is largest number:\n"<<b;
    }
    else
    {
     cout<<"c is largest number:\n"<<c;
    }
   }
   getch();
 }