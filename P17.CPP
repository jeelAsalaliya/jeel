#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
{
 clrscr();
 char name[]="how are you";
 int len;
 len=strlen(name);
 cout<<"length of string:"<<len;
 int len1=0;
 for(int i=0;name[i]!='\0';i++)
 {
  len1++;
 }
 cout<<"\n length of string using manual countin="<<len1;
 getch();
}