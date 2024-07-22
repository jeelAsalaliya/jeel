#include<iostream.h>
#include<conio.h>

 class bank
 {
  int actno,balance;
  char name[20];
  public:
  void getdata();
  void cd_amount(char,int,int);
 };

 void bank::getdata()
 {
  cout<<"\n enter account no:";
  cin>>actno;
  cout<<"\n enter account holder name:";
  cin>>name;
  cout<<"enter balance:";
  cin>>balance;
 }
  void bank::cd_amount(char ch,int amt,int ano)
  {
   if((ch=='c' || ch=='C') && ano==actno)
   {
    balance+=amt;
   }
   else if((ch=='d' || ch=='D') && amt==actno)
   {
    if(balance<=500 || balance<amt)
    {
     cout<<"\n you don't have enough balance:";
    }
    else
    {
     balance-=amt;
     cout<<"\n balance after credit/debit amount::\n";
    }
    cout<<"balance="<<balance;
   }
  }
   void main()
   {
    int n,i,ano,amt;
    char choice[5];
    bank b[10];

    cout<<"how many records you want enter:";
    cin>>n;
    cout<<"enter records:";

    for(i=0;i<n;i++)
    {
     cout<<"\n record"<<i+1;
     b[i].getdata();
    }
    cout<<"\n\n enter your account no:";
    cin>>ano;
    cout<<"\n what do you want to credit/debit:";
    cin>>choice;
    cout<<"enter amount:";
    cin>>amt;

    for(i=0;i<n;i++)
    {
     b[i].cd_amount(choice[0],amt,ano);
    }
    getch();
   }