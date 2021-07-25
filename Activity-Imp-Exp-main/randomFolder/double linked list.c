#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
struct Node
{
 struct Node*prev;
 int data;
 struct Node *next;
}*first=NULL;
void create(int A[],int n)
{
 int i;
 struct Node *t,*last;
 first=(struct Node *)malloc(sizeof(struct Node));
 first->data=A[0];
 first->prev=NULL;
 first->next=NULL;
 last=first;

 for(i=1;i<n;i++)
 {
 t=(struct Node*)malloc(sizeof(struct Node));
 t->data=A[i];
 t->next=NULL;
 t->prev=last;
 last->next=t;
 last=t;
 }
}
int length(struct Node*p)
{   int len=0;
    while(p)
    {
        len++;
        p=p->next;
    }
    return len;
}
void insert(struct Node*p,int index,int x)
{
    struct Node*t;
    int i;
    if(index<0 || index>length(p))
        return;
    if(index==0)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=x;
        t->prev=NULL;
        t->next=first;
        first->prev=t;
        first=t;
        }
     else{
        for(i=0;i<index-1;i++)
            p=p->next;
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=x;

        t->prev=p;
        t->next=p->next;
        if(p->next)
            p->next->prev=t;
        p->next=t;
     }
}
int Delete(struct Node*p,int index)
{
    int x=-1;
    if(index<1 || index>length(p))
        return -1;
    if(index==1)
    {
        first=first->next;
        if(first)
            first->prev=NULL;
        x=p->data;
        free(p);
    }
    else{
        for(int i=0;i<index-1;i++)
            p=p->next;
        p->prev->next=p->next;
        if(p->next)
            p->next->prev=p->prev;
            x=p->data;
            free(p);
        }
        return x;
}

void display(struct Node *p)
{ struct Node*last;
 printf("forward direction:\n");
 while(p!=NULL)
 {
 printf("%d ",p->data);
 last=p;
 p=p->next;
 }
 printf("\nbackward direction:\n");
 while(last){
    printf("%d ",last->data);
    last=last->prev;
    }
}
 void main()
 {
    system("cls");
    int ch,i,n,a[10],pos,x,b;
    printf("OMANSH DHAWAN CSE-B 202\n");
do{
    printf("\nMENU\n");
    printf("1.create\n");
    printf("2.insert\n");
    printf("3.delete\n");
    printf("4.display\n");
    printf("0.exit\n");
    printf("enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {case 1: printf("enter no. of elements in a list:");
              scanf("%d",&n);
              printf("enter elements in a list:");
              for(i=0;i<n;i++)
              scanf("%d",&a[i]);
              create(a,n);
              break;
      case 2: printf("enter position and element for insertion in list:");
              scanf("%d %d",&pos,&x);
              insert(first,pos,x);
              break;
      case 3: printf("enter index to be deleted:");
              scanf("%d",&b);
              printf("the deleted element is:%d",Delete(first,b));
              break;
      case 4: display(first);
              break;
      default: exit(0);
    }
  }while(ch<5);
   getch();
   }


