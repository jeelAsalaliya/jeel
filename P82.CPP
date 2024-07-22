#include<iostream.h>
#include<conio.h>

 const size=3;
 class vector
 {
  int v[size];
  public:

  friend void operator >>(istream &,vector &);
  friend void operator <<(ostream &,vector &);
  friend int sum(vector &);
 };
  void operator >>(istream &din,vector &b)
  {
   for(int i=0;i<size;i++)
	din>>b.v[i];
   }
   void operator <<(ostream &dout,vector &b)
   {
    for(int i=0;i<size;i++)
	dout<<b.v[i];
    }
    int sum(vector &b)
    {
     int tot=0;
     for(int i=0;i<size;i++)
	tot+=b.v[i];
     return tot;
    }
     void main()
     {
      clrscr();
      vector m;
      cout<<"enter elements of vector m/";
      cin>>m;
      cout<<"enter elements of vector m";
      cout<<m;
      int x=sum(m);
      cout<<"\n addition of elements="<<x;
      getch();
     }