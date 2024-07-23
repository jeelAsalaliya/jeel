#include<stdio.h>
#include<conio.h>

 void main()
 {
  char str[15],ch;
  int i,temp=0;
  clrscr();


  printf("\n enter string");
  gets(str);

  printf("\n enter char to search:");
  scanf("%c",&ch);


  for(i=0;str[i]!='\0';i++)
  {
   if(str[i]==ch)
   {
    temp=1;
    break;
   }
  }
    if(temp==1)
    {
     printf("character is found");
    }
     else
     {
      printf("character is not found");
     }
     getch();
    }