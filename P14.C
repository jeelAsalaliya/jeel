#include<stdio.h>
#include<conio.h>

void main()
{
 char str[30];
 int i,space=0,digit=0,alpha=0,symbol=0;

 printf("enter string:");
 gets(str);

 for(i=0;str[i]!='\0';i++)
 {
  if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
  {
   alpha++;
  }
   else if(str[i]== ' ')
   {
    space++;
   }
   else if(str[i]>=48 && str[i]<=57)
   {
    digit++;
   }
   else
   {
    symbol++;
   }
 }
 printf("\n total char %d",alpha);
 printf("\n total space %d",space);
 printf("\n total digit %d",digit);
 printf("\n total symbol %d",symbol);
 printf("\n total words %d",space+1);

 getch();
}