#include<iostream.h>
#include<conio.h>

 void main()
 {
  int arr[5];
  int *ptr=&arr[5];
  clrscr();

  cout<<"enter 5 elements in array:";

  for(int i=0;i<5;i++)

   cin>>arr[i];
   cout<<"\n elements of array\n";

  for(i=0;i<5;i++)
  {
   cout<<*(ptr++)<<"\n";
  }
  getch();
 }