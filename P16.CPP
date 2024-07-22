#include<iostream.h>
#include<conio.h>

 void main()
 {
  int x[5];
  int *ptr;
  clrscr();

  for(int i=0;i<5;i++)
  {
   cout<<"enter element\n"<<i+1;
   cin>>x[i];
 }
 ptr=&x[0];
 while(ptr<&x[5])
 {
  cout<<*ptr<<endl;
  ptr++;
 }
 getch();
}