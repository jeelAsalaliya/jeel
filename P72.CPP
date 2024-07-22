
#include<iostream.h>
#include<conio.h>
#include<string.h>

 class string
 {
  char *name;
  int length;
  public:
  string()
  {
   length=0;
   name=new char[length+1];
  }
   string(char *s)
   {
    length=strlen(s);
    name=new char[length+1];
    strcpy(name,s);
   }
    void display()
    {
     cout<<"\n"<<name;
    }
      void join(string &,string &);
      *string()
     {
     delete name;
     }
    };
     void string::join(string &a,string &b)
     {
      length=a.length+b.length;
      delete name;
      name=new char[length+1];
      strcpy(name,a.name);
      strcat(name,b.name);
     }
      void main()
      {
       char *first="ram";
       string name1(first),name2("sita"),name3("gita"),s1,s2;
       s1.join(name1,name2);
       s2.join(s1,name3);
       name1.display();
       name2.display();
       name3.display();
       s1.display();
       s2.display();
       getch();
      }