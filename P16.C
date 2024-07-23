#include<stdio.h>
#include<conio.h>
 void main()
 {
  int i,j;
  char a[20],b[23],c[67];
  clrscr();

  printf("\n enter str");
  gets(a);

  printf("\n enter str");
  gets(b);


  for(i=0;a[i]!='\0';i++)
  {
   c[i]=a[i];
  }
  for(j=0;b[j]!='\0';j++,i++)
  {
   c[i]=b[j];
  }
   c[i]='\0';
   puts(c);

   getch();
  }
