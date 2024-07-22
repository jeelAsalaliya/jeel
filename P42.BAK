#include<iostream.h>
#include<conio.h>
#include<string.h>

 class directory
 {
  char name[20];
  char mobile[10];
  char sname[20];
  char smobile[10];
  int choose;
  int compare;
  public:

  void getdata()
  {
   cout<<"\n enter name:";
   cin>>name;
   cout<<"\n enter mobile no:";
   cin>>mobile;
  }
  void search()
  {
   cout<<"\n________";
   cout<<"\n 1.search name";
   cout<<"\n 2.search number";
   cout<<"\n_________";
   cout<<"\n enter your choice";
   cin>>choose;

   switch(choose)
   {
    case 1:
    {
     cout<<"\n enter name for search:";
     cin>>sname;
     compare=strcmp(sname,name);
     if(compare==0)
     {
      cout<<"\n\n your mobile num is:"<<mobile;
     }
     else
      cout<<"\n\n can't find name search";
    }
     break;

     case 2:
     {
      cout<<"\n enter number for search:";
      cin>>smobile;
      compare=strcmp(smobile,mobile);
      if(compare==0)
      {
       cout<<"\n\n your name is:"<<name;
      }
      else
       cout<<"\n\n can't number searched";
     }
      break;

      default:
      {
       cout<<"out of range:";
       cout<<"\n press enter for exit:";
      }
      break;
     }
    }
   };
    void main()
    {
     directory d;
     clrscr();
     d.getdata();
     d.search();
     getch();
}