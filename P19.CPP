#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>

 void main()
 {
  clrscr();
  char name[]="svpatel college";
  char name1[]="hello";
  strrev(name);
  puts(name);
  getch();

  cout<<"manual reverse\n";
  int j=strlen(name1)-1;

  for(int i=0;i<strlen(name1)/2;i++,j--)
  {
   char c=name1[i];
   name1[i]=name1[j];
   name1[j]=c;
  }
  puts(name1);
  getch();
}