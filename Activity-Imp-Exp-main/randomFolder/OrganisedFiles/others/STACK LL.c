#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
struct Node
{
 int data;
 struct Node *next;
}*top=NULL;
void push(int x)
{
 struct Node *t;
 t=(struct Node*)malloc(sizeof(struct Node));

 if(t==NULL)
 printf("stack is full\n");
 else
 {
 t->data=x;
 t->next=top;
 top=t;
 }

}
int pop()
{
 struct Node *t;
 int x=-1;

 if(top==NULL)
 printf("Stack is Empty\n");
 else
 {
 t=top;
 top=top->next;
 x=t->data;
 free(t);
 }
 return x;
}
void display()
{
 struct Node *p;
 p=top;
 while(p!=NULL)
 {
 printf("%d ",p->data);
 p=p->next;
 }
 printf("\n");
}
void main()
{
    int ch,a;
    printf("@OMANSH DHAWAN 202 CSE-B\n");
    do{
    printf("\nMENU\n");
    printf("****stack using linked list****\n");
    printf("1.push\n");
    printf("2.pop\n");
    printf("3.display\n");
    printf("0.exit\n");
    printf("enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
                printf("enter the element to be inserted:");
                scanf("%d",&a);
                push(a);
                break;
        case 2: printf("deleted element is:%d",pop());
                break;
        case 3: printf("elements in stack are:\n");
                display();
                break;
        case 0: exit(0);

    }
    }while(ch<4);
    getch();
}






