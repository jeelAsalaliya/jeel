#include<iostream.h>
#include<conio.h>

class rupee
{
 float rup,paise;
 public:
 void getdata()
 {
  cout<<"\n enter rupees and paise:";
  cin>>rup>>paise;
 }
  void display()
  {
   cout<<"\n rupees=="<<rup;
   cout<<"\n paise=="<<paise;
  }
  rupee sum(rupee r1)
  {
   rupee r2;
   r2.paise=paise+r1.paise;
   if(r2.paise>=100)
   {
    r2.rup=r2.paise/100;
    r2.paise=r2.paise/100;
   }
   r2.rup=r2.rup+rup+r1.rup;
   return r2;
  }
 };
  void main()
  {
   clrscr();
   rupee x,y;
   x.getdata();
   y.getdata();
   rupee z=x.sum(y);
   z.display();
   getch();
  }