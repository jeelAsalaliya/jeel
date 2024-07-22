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
  string(char *);
  string(string &s);
  ~string()
  {
   delete p;
  }
  friend string operator *(string &,string &);
  friend int operator -=(string &,string &);
  friend void show(string &);
 };
  string::string(char *s)
  {
   len=strlen(s);
   p=new char[len+1];
   strcpy(p,s);
  }
  string::string(string &s)
  {
   len=s.len;
   p=new char[len+1];
   strcpy(p,s.p);
  }
   string operator *(string &s,string &t)
   {
    string temp;
    temp.len=s.len+t.len;
    temp.p=new char[temp.len+1];
    strcpy(temp.p,s.p);
    strcat(temp.p,t.p);
    return temp;
   }
    int operator <=(string &s,string &t)
    {
     int m=strlen(s.p);
     int n=strlen(t.p);

     if(m<=n)
	return 1;
     else
	return 0;
     }
      void show(string &s)
      {
       cout<<"\n"<<s.p;
      }
      void main()
      {
       string s1="new";
       string s2="york";
       string s3="delhi";
       string t1,t2,t3;
       t1=s1;
       t2=s2;
       t3=s1+s3;
       show(t1);
       show(t2);
       show(t3);

       if(t1<=t3)
       {
	show(t1);
	cout<<"smaller than";
	show(t3);
	cout<<"\n";
       }
       else{
		show(t3);
		cout<<"smaller than";
		show(t1);
		cout<<"\n";
       }
       getch();
      }