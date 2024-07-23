#include<stdio.h>
#include<conio.h>


 struct student
 {
  int rollno;
  char name[34];
  float per;
 };

  void main()
  {
   int i,j,temp_rno;
   struct student s[5],temp_name;
   float temp_per,p;
   clrscr();

   for(i=0;i<5;i++)
   {
    printf("enter rollno:");
    scanf("%d",&s[i].rollno);
    printf("enter name:");
    fflush(stdin);
    gets(s[i].name);
    printf("enter per:");
    scanf("%f",&p);
   }
   p=s[i].per;
    for(i=0;i<5;i++)
    {
     for(j=i+1;j<5;j++)
     {
      if(s[i].per > s[j].per)
      {
       temp_rno=s[i].rollno;
       s[i].rollno=s[j].rollno;
       s[j].rollno=temp_rno;

       strcpy(temp_name,s[i].name);
       strcpy(s[i].name,s[j].name);
       strcpy(s[j].name,temp_name);

       temp_per=s[i].per;
       s[i].per=s[j].per;
       s[j].per=temp_per;
      }
     }
    }
     for(i=0;i<5;i++)
     {
      printf("\n rollno \t name \t per:");
      printf("%d",s[i].rollno);
      printf("\t %s",s[i].name);
      printf("\t %f",p);
     }
     getch();
    }
