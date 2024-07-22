
#include<iostream.h>
#include<conio.h>

 void main()
 {
  clrscr();
  int *p=new int;
  float *p1=new float;
  *p=20;
  *p1=30;

  cout<<"value of p=="<<*p;
  cout<<"value of p1=="<<*p1;
  int *ptr=new int(50);
  cout<<"value at ptr=="<<*ptr;
  int *ptr1=new int[3];

  for(int i=0;i<3;i++)
  {
   cout<<"\n enter value:";
   cin>>*ptr1;
   ptr1++;
  }
  for(i=0;i<3;i++)
	ptr1--;
  for(i=0;i<3;i++)
  {
   cout<<"\n array value...=="<<*ptr1;
   ptr1++;
  }
  delete []ptr1;
  cout<<"\n value of ptr1=="<<*ptr1;
  getch();
}