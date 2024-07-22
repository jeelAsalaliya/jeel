#include<iostream.h>
#include<conio.h>
#include<string.h>

 class string
 {
  char *p;
  int len;
  public:
  string()
  {
   len=0;
   p=0;
  }
  string(char *s)
  {
   len=strlen(s);
   p=new char[len+1];
   strcpy(p,s);
  }
  void display()
  {
   cout<<"string=="<<p;
  }
 };
  void main()
  {
   char *s1="ram";
   string str1=s1;
   str1.display();
   getch();
  }