//node deletion (last node)
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct x
{
 int no;
 struct x *next;
}*p,*q,*r,*s;
void main()
{
char ch;
clrscr();
p=q=(struct x*)malloc(sizeof(struct x));
while(1)
{
  printf("\nEnter any number :");
  scanf("%d",&p->no);
  printf("\n\nAny more(y/n)?  :");
  fflush(stdin);
  ch=getche();
  if(ch=='y'||ch=='Y')
  {
    p->next=(struct x*)malloc(sizeof(struct x));
    p=p->next;
  }
  else
  {
  p->next=NULL;
  break;
  }
 }
 printf("\nInputed numbers before deletion :\n");
 for(r=q;r!=NULL;r=r->next)
 printf("%d\t",r->no);
 for(r=q;r->next!=p;r=r->next);
 r->next=NULL;
 printf("\nInformation of deleted node : %d",p->no);
 free(p);
 p=r;
 printf("\nInputed numbers after deletion :\n");
 for(r=q;r!=NULL;r=r->next)
 printf("%d\t",r->no);
 getch();
}