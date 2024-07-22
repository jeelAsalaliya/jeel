#include<iostream.h>
#include<conio.h>

 class average
 {
  private:
  float a,b,c,avg;
  public:
  void getdata()
  {
   cout<<"enter a:\n";
   cin>>a;
   cout<<"enter b:\n";
   cin>>b;
   cout<<"enter c:\n";
   cin>>c;
  }
   void putdata()
   {
    cout<<"\n a is:"<<a;
    cout<<"\n b is:"<<b;
    cout<<"\n c is:"<<c;
    avg=(a+b+c)/3;
    cout<<"average is:\n"<<avg;
   }
  };
   void main()
   {
    clrscr();
    average a1;
    a1.getdata();
    a1.putdata();
    getch();
   }