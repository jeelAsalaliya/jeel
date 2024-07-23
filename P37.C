#include<stdio.h>
#include<conio.h>

struct student
{
 char name[30];
 int rollno,total,sub[3];
};
void main()
{
 int i,j,n;
 struct student st[20],temp;
 clrscr();

 printf("\n student data enter num:");
 scanf("%d",&n);

 for(i=0;i<n;i++)
 {
  printf("name of stu=%d\n",(i+1));
  scanf("%s",&st[i].name);
  printf("roll no of stu=%d\n",(i+1));
  scanf("%d",&st[i].rollno);
  printf("marks of sun=%d\n",(i+1));
  scanf("%d %d %d",&st[i].sub[0],&st[i].sub[1],&st[i].sub[2]);

  st[i].total=(st[i].sub[0]+st[i].sub[1]+st[i].sub[2]);
  printf("total marks=%d\n",(i+1),st[i].total);
 }
 for(i=0;i<(n-1);i++)
 {
  for(j=0;j<(n-i-1);j++)
  {
   if(st[j].total < st[j+1].total)
   {
    temp=st[j];
    st[j]=st[j+1];
    st[j+1]=temp;
   }
  }
 }
 printf("\n\n\n\n\t\t **** sorted in descending order *******");
 for(i=0;i<n;i++)
 {
  printf("\t%s",st[i].name);
  printf("\t%d",st[i].rollno);
  printf("\t%d",st[i].total);
}
  getch();
}