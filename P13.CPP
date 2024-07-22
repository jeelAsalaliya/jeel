#include<iostream.h>
#include<conio.h>

void main()
{
 int arr[5],temp,i,j;
 clrscr();

 cout<<"enter the five numbers:";
 for(i=0;i<5;i++)
 {
  cin>>arr[i];
 }
 for(i=0;i<5;i++)
 {
   for(j=i;j<5;j++)
   {
    if(arr[i]>arr[j])
    {
     temp=arr[i];
     arr[i]=arr[j];
     arr[j]=temp;
    }
   }
 }
  cout<<"array in ascending order\n";
  for(i=0;i<5;i++)
  {
   cout<<arr[i]<<" ";
  }
  getch();
 }
