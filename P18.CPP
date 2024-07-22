#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>

 void main()
 {
  clrscr();
  char name[]="svpatel college";
  char name1[30],name2[30];

  strcpy(name1,name);
  puts("copied string=");
  puts(name1);
  getch();

  cout<<"manual copy\n";

  for(int i=0;name[i]!='\0';i++)
  {
   name2[i]=name[i];
  }
   name2[i]='\0';
   cout<<name2;
   getch();
}