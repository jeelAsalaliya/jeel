
#include<iostream.h>
#include<conio.h>
#include<string.h>
const size=3;

class directory
{
 unsigned long int mno;
 char mname[10];
 public:
 void getdata()
 {
  cout<<"\n enter mno:";
  cin>>mno;
  cout<<"\n enter mname:";
  cin>>mname;
 }
  void display()
  {
   cout<<"mobile no:\n"<<mno;
   cout<<"mobile name:\n"<<mname;
  }
  int x,char mname[20];
   cout<<"\n enter name to search:");
   int search(char p[])
   int flag=0;

   if((strcmp(name,p))==0)
   {
    display();
    flag=1;
   }
   return flag
 };

  void main()
  {
   clrscr();
   directory d[size];
   cout<<"\n enter name to search:";
   cin>>mname;
   for(i=0;i<size;i++)
   {
    x=d[i].search(mname);
   }
   if(x==0)
   cout<<"no name is there directory";

   for(int i=0;i<size;i++)
   {
    d[i].getdata();
   }
   for(i=0;i<size;i++)
   {
    d[i].display();
   }
   getch();
  }
