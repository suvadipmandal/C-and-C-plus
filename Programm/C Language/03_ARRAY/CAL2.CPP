//Create a calander usnig array
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char mn[12][15]={"January","February","March","April","May","June","July",
"August","September","October","November","December"};
char wn[7][4]={"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
int i,j,day,r=7,c=50;
_setcursortype(_NOCURSOR);
for(i=0;i<12;++i)
{
clrscr();
gotoxy((80-strlen(mn[i]))/2,2);
printf("%s",mn[i]);
for(j=0;j<7;++j)
{
 gotoxy((j+1)*10,4);
 if(j==0)
 textcolor(RED);
 else
 textcolor(WHITE);
 cprintf("%s",wn[j]);
}
for(j=10;j<=72;++j)
{
 gotoxy(j,5);
 printf("~");
 gotoxy(j,17);
 printf("=");
}
if(i==0||i==2||i==4||i==6||i==7||i==9||i==11)
 day=31;
else
 day=30;
 if(i==1)
  day=29;
   for(j=1;j<=day;++j)
   {
    gotoxy(c,r);
    if(c==10)
    textcolor(RED);
    else
    textcolor(WHITE);
    cprintf("%02d",j);
    c+=10;
    if(c>70)
    {
    c=10;
    r+=2;
    if(r>15)
    r=7;
    }
   }
  getch();
 }
}
