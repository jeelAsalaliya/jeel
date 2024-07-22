#include<iostream.h>
#include<string.h>
#include<conio.h>

 class book
 {
  int bookno;
  char booktitle[20];
  float price;

  void total_cost(int n)
  {
   float tcost;
   tcost=price*n;
   cout<<tcost<<"$";
  }
  public:
  void input()
  {
   cout<<"enter book number:";
   cin>>bookno;
   cout<<"enter book title:";
   cin>>booktitle;
   cout<<"enter price per copy";
   cin>>price;
  }
   void purchase()
   {
    int n;
    cout<<"enter number of copies to purchase:";
    cin>>n;
    cout<<"total cost is:";
    total_cost(n);
   }
  };
   void main()
   {
    clrscr();
    book b;
    b.input();
    b.purchase();
    getch();
  }