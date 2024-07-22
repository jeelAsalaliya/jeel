#include<iostream.h>
#include<conio.h>

 enum shape
 {
  circle,
  rectangle,
  triangle
 };

 int main()
 {
  cout<<"\n enter shape code:";
  int code;
  cin>>code;
  while(code>=circle && code<=triangle)
  {
   switch(code)
   {
    case circle:
     cout<<"circle";
     break;
    case rectangle:
     cout<<"rectangle:";
     break;
    case triangle:
     cout<<"triangle:";
     break;
    }
    cout<<"\n enter shape code:";
    cin>>code;
  }
   cout<<"good bye";
   getch();
   return 0;
 }