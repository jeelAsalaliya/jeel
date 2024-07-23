#include<stdio.h>
#include<conio.h>

void main()
{
 int i,j;
 char a[5][20],temp[20];
 clrscr();

 for(i=0;i<5;i++)
 {
  printf("\n enter any strings:");
  scanf("%s",&a[i]);
 }
 for(i=0;i<5;i++)
 {
  for(j=i+1;j<5;j++)
  {
   if(strcmp(a[i],a[j])>0)
   {
    strcpy(temp,a[i]);
    strcpy(a[i],a[j]);
    strcpy(a[j],temp);
   }
  }
 }
 for(i=0;i<5;i++)
 {
   printf("%s\n",a[i]);
  }

 getch();
}










