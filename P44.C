#include<stdio.h>
 void main()
 {
  char str1[3][20];
  int upper=0;
  int i,j;
  clrscr();

   for(i=0;i<3;i++)
   {
  printf("\n enter the strings:");
  gets(str1[i]);
 }
  for(i=0;i<3;i++)
  {
   for(j=0;str1[i][j]!='\0';j++)
   {
    if(str1[i][j] >='A' && str1[i][j] <='Z')
    {
     upper++;
    }
   }
  }
   printf("uppercase %d ",upper);
   getch();
  }


