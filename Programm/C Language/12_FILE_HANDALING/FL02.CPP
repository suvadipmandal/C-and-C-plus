//writing data into student file using fprintf()
//==============================================
#include<stdio.h>
#include<conio.h>
void main()
 {
 FILE *p;
 char regno[15],name[30];
 char ch='y';
 p=fopen("student.txt","w");
 while(ch=='y' || ch=='y')
 {
 clrscr();
 printf("Registration No. :");
 gets(regno);
 printf("Student's name :");
 gets(name);
 fprintf(p,"%s %s\n",regno,name);
 printf("\n\nAny more entry now(y/n)? ");
 fflush(stdin);
 ch=getche();
 }
 fclose(p);
 }
