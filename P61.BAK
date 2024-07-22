#include<iostream.h>
#include<stdlib.h>
#include<conio.h>

 float area(float r)
 {
  return(3.14*r*r);
 }
 float area(float b,float h)
 {
  return(0.5*b*h);
 }
 float area(float l,int e)
 {
  return(l*e);
 }
  int main()
  {
   float b,h,r,l;
   int e,ch;

   do{
   cout<<"\n\n**menu**\n\n";
   cout<<"\n1.area of circle";
   cout<<"\n2.area of triangle";
   cout<<"n3.area of rectangle";
   cout<<"n4.exit";
   cout<<"\n enter your choice:";
   cin>>ch;
   switch(ch)
   {
    case 1:
    cout<<"\n enter radius of circle:";
    cin>>r;
    cout<<"\n area of circle:"<<area(r);
    break;

    case 2:
    cout<<"\n enter the base&height of..";
    cin>>b>>h;
    cout<<"\n area of triangle:"<<area(b,h);
    break;

    case 3:
    cout<<"\n enter the length&breath...";
    cin>>l>>e;
    cout<<"\n area of rectangle"<<area(l,e);
    break;

    case 4:
    exit(0);
    default:
    cout<<"\n invalid choice:";
   }
  }while(ch!=4);
  return 0;
 }
