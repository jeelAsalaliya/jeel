#include<stdio.h>
#include<conio.h>

 void main()
 {
  int mystrlen(char []);
  char str[23];
  int len,i;
  clrscr();


   printf("\n enter strings:");
   gets(str);

  len=mystrlen(str);
  printf("\n total char=%d",len);
  getch();
 }
 int mystrlen(char str[])
 {
  int i,len=0;

  for(i=0;str[i]!='\0';i++)
  {
   len++;
  }
  return len;
 }