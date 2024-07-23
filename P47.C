#include<stdio.h>
#include<conio.h>

 struct student
 {
  int rollno;
  float per;
  char name[20];
 };
  void main()
  {
   struct student s1;
   float a;

   printf("enter any rollno:");
   scanf("%d",&s1.rollno);
   printf("enter any name:");
   fflush(stdin);
   gets(s1.name);
   printf("enter per:");
   scanf("%f",&a);

   s1.per=a;

   printf("\n rollno=%d",s1.rollno);
   printf("\n name=%s",s1.name);
   printf("\n per=%f",s1.per);

   getch();
  }