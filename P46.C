#include<stdio.h>
#include<conio.h>

 void main()
 {
  int i,j,c=0,n;
  char str[10][20];
  clrscr();

  printf("enter num of strings:");
  scanf("%d",&n);

  printf("enter %d strings:\n");
  for(i=0;i<5;i++)
  {
   gets(str[i]);
  }
  for(i=0;i<5;i++)
  {
   for(j=0;str[i][j]!='\0';j++)
   {
    if(str[i][j] >='A' && str[i][j] <='Z')
    {
     c++;
     }
    }
   }
   printf("\n there are %d uppercase letteres\n",c);
   getch();
  }