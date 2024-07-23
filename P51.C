#include<stdio.h>
#include<conio.h>

 struct student
 {
  int rollno,sub[3];
  char name[34];
 };
  void main()
  {
   int i,total=0;
   struct student s1;

   printf("enter rollno:");
   scanf("%d",&s1.rollno);
   printf("enter name:");
   scanf("%s",&s1.name);

   for(i=0;i<3;i++)
   {
   scanf("%d",&s1.sub[i]);
   total+=s1.sub[i];
  }
   printf("total=%d",total);
   getch();
 }