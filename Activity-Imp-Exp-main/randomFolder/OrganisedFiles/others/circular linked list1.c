#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct Node
{
 int data;
 struct Node *next;
}*Head;
void create(int A[],int n)
{
 int i;
 struct Node *t,*last;
 Head=(struct Node*)malloc(sizeof(struct Node));
 Head->data=A[0];
 Head->next=Head;
 last=Head;

 for(i=1;i<n;i++)
 {
 t=(struct Node*)malloc(sizeof(struct Node));
 t->data=A[i];
 t->next=last->next;
 last->next=t;
 last=t;
 }
}
int Length(struct Node *p)
{
 int len=0;
 do
 {
 len++;
 p=p->next;

 }while(p!=Head);
 return len;
}
void insert(struct Node *p,int index, int x)
{
 struct Node *t;
 int i;
 if(index<0 || index > Length(p))
 return;

 if(index==0)
 {
 t=(struct Node *)malloc(sizeof(struct Node));
 t->data=x;
 if(Head==NULL)
 {
 Head=t;
 Head->next=Head;
 }
 else
 {
 while(p->next!=Head)p=p->next;
 p->next=t;
 t->next=Head;
 Head=t;
 }

 }
 else
 {
 for(i=0;i<index-1;i++)p=p->next;
 t=(struct Node *)malloc(sizeof(struct Node));
 t->data=x;
 t->next=p->next;
 p->next=t;

 }
}
int Delete(struct Node *p,int index)
{
 struct Node *q;
 int i,x;

 if(index <0 || index >Length(Head))
 return -1;
 if(index==1)
 {
 while(p->next!=Head)p=p->next;
 x=Head->data;
 if(Head==p)
 {
 free(Head);
 Head=NULL;
 }
 else
 {
 p->next=Head->next;
 free(Head);
 Head=p->next;
 }
 }
 else
 {
 for(i=0;i<index-2;i++)
 p=p->next;
 q=p->next;
 p->next=q->next;
 x=q->data;
 free(q);
 }
 return x;
}
void display(struct Node *h)
{
 do
 {
 printf("%d ",h->data);
 h=h->next;
 }while(h!=Head);
 printf("\n");
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
    {case 1: printf("enter no. of elements in a list:");
              scanf("%d",&n);
              printf("enter elements in a list:");
              for(i=0;i<n;i++)
              scanf("%d",&a[i]);
              create(a,n);
              break;
      case 2: printf("the no. of elements in list is:%d",Length(Head));
              break;
      case 3: printf("enter position and element for insertion in list:");
              scanf("%d %d",&pos,&x);
              insert(Head,pos,x);
              break;
      case 4: printf("enter index to be deleted:");
              scanf("%d",&b);
              printf("the deleted element is:%d",Delete(Head,b));
              break;
      case 5: display(Head);
              break;
      default: exit(0);
    }
  }while(ch<6);
   getch();
   }



