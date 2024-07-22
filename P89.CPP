#include<iostream.h>
#include<conio.h>
 class B
 {
  int a;
  public:
  int b;
  void getdata();
  int geta();
  void showa();
 };
  class D:public B
  {
   int c;
   public:
   void mul();
   void display();
  };
   void B::getdata()
   {
    cout<<"\n enter value to a and b";
    cin>>a>>b;
   }
    int B::geta()
    {
     return a;
    }
    void B::showa()
    {
     cout<<"a="<<a<<endl;
    }
     void D::mul()
     {
      c=b*geta();
     }
     void D::display()
     {
      cout<<"a=="<<geta()<<endl;
      cout<<"b=="<<b<<endl;
      cout<<"c=="<<c<<endl;
     }
      void main()
      {
       clrscr();
       D d;
       cout<<"base class function"<<endl;
       d.getdata();
       d.mul();
       cout<<"base class function"<<endl;
       d.showa();
       cout<<"derived class function"<<endl;
       d.display();
       d.b=20;
       d.mul();
       cout<<"derived class function"<<endl;
       d.display();
       getch();
      }
