#include<iostream.h>
#include<conio.h>

 void main()
 {
  int arr[5],max,i;
  clrscr();

  cout<<"enter any five numbers:";
  for(i=0;i<5;i++)
  {
   cin>>arr[i];
  }
  max=arr[0];
  for(i=0;i<5;i++)
  {
   if(max<arr[i])
   {
    max=arr[i];
   }
  }
  cout<<"maximum number in array:"<<max;
  getch();
}