#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
struct Node
{
 int data;
 struct Node *next;

}*front=NULL,*rear=NULL;
void enqueue(int x)
{
 struct Node *t;
 t=(struct Node*)malloc(sizeof(struct Node));
 if(t==NULL)
 printf("Queue is FUll\n");
 else
 {
 t->data=x;
 t->next=NULL;
 if(front==NULL)
 front=rear=t;
 else
 {
 rear->next=t;
 rear=t;
 }
 }

}
int dequeue()
{
 int x=-1;
 struct Node* t;

 if(front==NULL)
 printf("Queue is Empty\n");
 else
 {
 x=front->data;
 t=front;
 front=front->next;
 free(t);
 }
 return x;
}
void display()
{
 struct Node *p=front;
 while(p)
 {
 printf("%d ",p->data);
 p=p->next;
 }
 printf("\n");
}
void main()
{    int ch,a;
    printf("@OMANSH DHAWAN 202 CSE-B\n");
    do{
    printf("\nMENU\n");
    printf("****queue using linked list****\n");
    printf("1.enqueue\n");
    printf("2.dequeue\n");
    printf("3.display\n");
    printf("0.exit\n");
    printf("enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
                printf("enter the element to be inserted:");
                scanf("%d",&a);
                enqueue(a);
                break;
        case 2: printf("deleted element is:%d",dequeue());
                break;
        case 3: printf("elements in queue are:\n");
                display();
                break;
        case 0: exit(0);

    }
    }while(ch<4);
    getch();
}

