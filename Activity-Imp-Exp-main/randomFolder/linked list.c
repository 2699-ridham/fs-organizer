#include<conio.h>
#include <stdio.h>
#include <stdlib.h>

struct Node
{
 int data;
 struct Node *next;
}*first=NULL;
void create(int A[],int n)
{
 int i;
 struct Node *t,*last;
 first=(struct Node *)malloc(sizeof(struct Node));
 first->data=A[0];
 first->next=NULL;
 last=first;

 for(i=1;i<n;i++)
 {
 t=(struct Node*)malloc(sizeof(struct Node));
 t->data=A[i];
 t->next=NULL;
 last->next=t;
 last=t;
 }
}
int count(struct Node *p)
{
 int l=0;
 while(p)
 {
 l++;
 p=p->next;
 }
 return l;
}
void insert(struct Node *p,int index,int x)
{
 struct Node *t;
 int i;

 if(index < 0 || index > count(first))
 return;
 t=(struct Node *)malloc(sizeof(struct Node));
 t->data=x;

 if(index == 0)
 {
 t->next=first;
 first=t;
 }
 else if(index>0)
 { p=first;
 for(i=0;i<index-1&&p;i++)
 p=p->next;
 if(p)
 { t=(struct Node *)malloc(sizeof(struct Node));
   t->data=x;
   t->next=p->next;
   p->next=t;
}
}
}
int Delete(struct Node *p,int index)
{
 struct Node *q=NULL;
 int x=-1,i;

 if(index < 1 || index > count(p))
 return -1;
 if(index==1)
 {
 q=first;
 x=first->data;
 first=first->next;
 free(q);
 return x;
 }
 else
 {
 for(i=0;i<index-1;i++)
 {
 q=p;
 p=p->next;
 }
 if(p){
 q->next=p->next;
 x=p->data;
 free(p);
 }
}
return x;
}
void display(struct Node *p)
{
 while(p!=NULL)
 {
 printf("%d ",p->data);
 p=p->next;
 }
}

 void main()
 {
    system("cls");
    int ch,i,n,a[10],pos,x,b;

    do{
    printf("\nMENU\n");
    printf("1.create\n");
    printf("2.count\n");
    printf("3.insert\n");
    printf("4.delete\n");
    printf("5.display\n");
    printf("0.exit\n");
    printf("enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: printf("enter no. of elements in a list:");
              scanf("%d",&n);
              printf("enter elements in a list:");
              for(i=0;i<n;i++)
              scanf("%d",&a[i]);
              create(a,n);
              break;
      case 2: printf("the no. of elements in list is:%d",count(first));
              break;
      case 3: printf("enter position and element for insertion in list:");
              scanf("%d %d",&pos,&x);
              insert(first,pos,x);
              break;
      case 4: printf("enter index to be deleted:");
              scanf("%d",&b);
              printf("the deleted element is:%d",Delete(first,b));
              break;
      case 5: display(first);
              break;
      default: exit(0);
    }
  }while(ch<6);
   getch();
 }
