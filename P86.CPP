#include<iostream.h>
#include<string.h>
#include<conio.h>

class test
{
 int no;
 int mark[3];
 public:
 void getdata();
 void display();
 operator float();
};

 void test::getdata()
 {
  cout<<"\n enter no";
  cin>>no;
  cout<<"\n enter marks for three subject";
  for(int i=0;i<3;i++)
  {
   cin>>mark[i];
  }
 }
  void test::display()
  {
   cout<<"\n number=="<<no;
   cout<<"\n marks=="<<endl;

   for(int i=0;i<3;i++)
   {
    cout<<mark[i]<<endl;
   }
  }
   test::operator float()
   {
    float per=0;
    int sum=0;
    for(int i=0;i<3;i++)
	sum=sum+mark[i];
	per=float(sum)/3;
	return per;
    }
     void main()
     {
      clrscr();
      test t;
      t.getdata();
      float p=t;
      t.display();
      cout<<"\n percentage=="<<p;
      getch();
     }