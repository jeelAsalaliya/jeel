#include<stdio.h>
#include<conio.h>

 struct student
 {
  int rollno;
  char name[20];
  float per;
 }s;
  void main()
  {
   void display(struct student);

   scanf("%d",&s.rollno);
   fflush(stdin);
   gets(s.name);
   scanf("%f",&s.per);

   display(s);
   getch();
  }
   void display(struct student x)
   {
    printf("%d",x.rollno);
    printf("%s",x.name);
    printf("%f",x.per);
   }