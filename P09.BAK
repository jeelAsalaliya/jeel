#include<iostream.h>
#include<conio.h>

 double add(double,double);
 double sub(double,double);
 double mult(double,double);
 double div(double,double);

 void display(double,double,double,char);
 int main()
 {
  double num1,num2;
  int choice;
  char ch;

  do{
  cout<<"enter two num:";
  cin>>num1>>num2;

  cout<<"1.add"<<endl;
  cout<<"2.sub"<<endl;
  cout<<"3.mult"<<endl;
  cout<<"4.div"<<endl;
  cout<<"5.exit"<<endl;

  cout<<"enter your choice:";
  cin>>choice;

  switch(choice)
  {
   case 1:
   cout<<"result="<<add(num1,num2)<<endl;
   break;
   case 2:
   cout<<"resu;t="<<sub(num1,num2)<<endl;
   break;
   case 3:
   cout<<"result="<<mult(num1,num2)<<endl;
   break;
   case 4:
   cout<<"result="<<div(num1,num2)<<endl;
   break;
   case 5:
   cout<<"thank you"<<endl;

   default:
   cout<<"error! not found operator"<<endl;
   }
   cout<<"continue";
   cin>>ch;
   }while(ch=='y');
    cout<<"thank you"<<endl;
    return 0;
  }

   double add(double n1,double n2)
   {
    return n1+n2;
   }
   double sub(double n1,double n2)
   {
   return n1-n2;
   }
   double mult(double n1,double n2)
   {
    return n1*n2;
   }
   double div(double n1,double n2)
   {
    return n1/n2;
   }
