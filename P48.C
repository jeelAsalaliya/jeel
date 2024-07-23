#include<stdio.h>
#include<conio.h>

 struct student
 {
  int rollno,sub1,sub2,sub3;
 };
  void main()
  {
   int total;
   float per;
   struct student s1;
   clrscr();


   printf("enter rollno:");
   scanf("%d",&s1.rollno);
  // printf("enter total");
 // scanf("%d",total);
   printf("enter sub detail:");
   scanf("%d %d %d",&s1.sub1,&s1.sub2,&s1.sub3);


   total=s1.sub1+s1.sub2+s1.sub3;
   per=total/3;

   printf("\n rollno=%d",s1.rollno);
   printf("\n total=%d",total);
   printf("\n per=%f",per);

   getch();
  }