//single link-list
#include<stdio.h>
#include<malloc.h>
#include<conio.h>
struct x
{
  int no;
  struct x *next;
}*p,*q,*r,*s;

void main()
{
  p=q=(struct x*)malloc(sizeof(struct x));
  char ch;
  int c,maxnode=0,target;
  clrscr();
  while(1)
  {
   ++maxnode;
   printf("\nEnter any number :");
   scanf("%d",&p->no);
   printf("any more(y/n)? :");
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
  printf("\n\nNodes information before insertin :\n");
  for(r=q;r!=NULL;r=r->next)
  printf("%d\t",r->no);

  printf("\nEnter the no of target node  :");
  scanf("%d",&target);
  if(target<1||target>maxnode)
  printf("\n\nTarget out of range....");
  else
  {
  r=(struct x*)malloc(sizeof(struct x));
  printf("\nEnter the value of new node:");
  scanf("%d",&r->no);
  if(target==1)
  {
  r->next=q;
  q=r;
  }
  else
  {
  for(c=1,s=q;s!=p;++c,s=s->next)
  {
  if(c+1==target)
  {
  r->next=s->next;
  s->next=r;
  break;
  }
 }
}
  printf("\n\nNodes information after information :\n");
  for(r=q;r!=NULL;r=r->next)
  printf("%d\t",r->no);
  }
  getch();
  free(q);
}