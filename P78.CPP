#include<iostream.h>
#include<conio.h>
#include<string.h>

class bank
{
 int acno;
 char nm[100],acctype[100];
 float bal;
 public:
 bank(int acc_no,char *name,char *acc_type,float balance)
 {
  acno=acc_no;
  strcpy(nm,name);
  strcpy(acctype,acc_type);
  bal=balance;
 }
 void deposit();
 void withdraw();
 void display();
};
 void bank::deposit()
 {
  int damt1;
  cout<<"\n enter deposit amount";
  cin>>damt1;
  bal+=damt1;
 }
  void bank::withdraw()
  {
   int wamt1;
   cout<<"\n enter withdraw amount";
   cin>>wamt1;
   if(wamt1>bal)
	cout<<"\n cannot withdraw amount";
   bal-=wamt1;
  }
   void bank::display()
   {
    cout<<"\n-----------";
    cout<<"\n account no:"<<acno;
    cout<<"\n name:"<<nm;
    cout<<"\n account type:"<<acctype;
    cout<<"\n balance:"<<bal;
   }
    int main()
    {
     int acc_no;
     char name[100],acc_type[100];
     float balance;
     cout<<"\n enter details:\n";
     cout<<"\n-----------------";
     cout<<"\n account no:";
     cin>>acc_no;
     cout<<"\n name:";
     cin>>name;
     cout<<"\n account type:";
     cin>>acc_type;
     cout<<"\n balance:";
     cin>>balance;

     bank b1(acc_no,name,acc_type,balance);
     b1.deposit();
     b1.withdraw();
     b1.display();
     return 0;
    }