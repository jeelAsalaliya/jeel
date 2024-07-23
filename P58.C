#include<stdio.h>
#include<conio.h>
#include<string.h>

 void main()
 {
  char str1[20],str2[40];
  int ch,i,j;
  clrscr();

  do{
   printf("\n");
   printf("\n\tmrnu:");
   printf("\n--------\n");
   printf("1:exit");
   printf("\n2:print string:");
   printf("\n3:length of string:");
   printf("\n4:copy first string into second strings:");
   printf("\n5:copy second string into first strings:");
   printf("\n6:compare two string:");
   printf("\n7:reverse string:");
   printf("\n8:concatenating  two string");
   printf("\n------------------------------\n");
   printf("\nenter your choice:");
   scanf("%d",&ch);

   switch(ch)
   {
    case 1:
    exit(0);
    break;
    case 2:
    printf("\n enter a string");
    scanf("%s",str1);
    printf("\n string is:%s",str1);
    gets(str1);
    break;
    case 3:
    printf("\n enter string:");
    scanf("%s",str1);
    i=strlen(str1);
    printf("\n length of string is:%d\n",i);
    break;
    case 4:
    printf("\n enter a string:");
    scanf("%s",&str1);
    printf("\n string1 is =%s",str1);
    strcpy(str2,str1);
    printf("\n string 2 is=%s",str2);
    break;
    case 5:
    printf("\n enter a string:");
    scanf("%s",&str2);
    printf("\n string 2 is=%s",str2);
    strcpy(str1,str2);
    printf("\n string 1 is=%s",str1);
    break;
    case 6:
    printf("\n enter a string1:");
    scanf("%s",&str1);
    printf("\n enter a string2:");
    scanf("%s",&str2);
    j=strcmp(str1,str2);

    if(j==0)
    {
     printf("string are same:");
     }
     else
     {
      printf("string are not same:");
     }
     break;
     case 7:
     printf("\n enter a string:");
     scanf("%s",&str1);
     strrev(str1);
     printf("reverse string:%s\n\n",str1);
     break;
     case 8:
     printf("\n enter a string1:");
     scanf("%s",&str1);
     printf("\n enter a string2;");
     scanf("5s",&str2);
     strcat(str1,str2);
     printf("\n string after concatenation %s\n\n",str1);
     break;

     default:
     printf("\n your choice is wrong!!");
     printf("\n thank you!!!");
    }
   }
   while(ch!=9);
   getch();
 }
