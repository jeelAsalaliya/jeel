
#include<iostream.h>
#include<conio.h>

class matrix
{
 int **p;
 int d1,d2;
 public:
 matrix(int a,int b)
 {
  d1=a;
  d2=b;
  p=new int *[d1];

  for(int i=0;i<d1;i++)
  {
   p[i]=new int[d2];

  }
 }
  void getdata()
  {
   cout<<"\n enter value in matrix:";
   for(int i=0;i<d1;i++)
   {
    cout<<"\n row "<<i;
    for(int j=0;j<d2;j++)
    {
     cin>>p[i][j];
    }
   }
  }
   void display()
   {
    for(int i=0;i<d1;i++)
    {
     cout<<"\n row"<<i;
     for(int j=0;j<d2;j++)
     {
      cout<<p[i][j]<<"\t";
      }
     }
    }
     *matrix()
     {
      for(int i=0;i<d1;i++)
	delete p[i];
      delete p;
     }
    };
     void main()
     {
      clrscr();
      matrix m(2,2);
      m.getdata();
      m.display();
      getch();
     }