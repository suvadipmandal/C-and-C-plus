#include<stdio.h>
#include<conio.h>
void main()
 {
 char x[50];
 int l;
 clrscr();
 printf("enter any string :");
 for(l=0;(x[l]=getchar())!='\n';++l);
 x[l]='\0';
 printf("\ninputed string : %s",x);
 printf("\nlength=%d",l);
 getch();
 }