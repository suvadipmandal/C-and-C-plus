#include<stdio.h>
#include<conio.h>
void main()
 {
 char x='A';
 char y;
 clrscr();
 if(x>='A' && x<='Z')
 y=x+32;
 printf("\nx=%c\ny=%c",x,y);
 getch();
 }