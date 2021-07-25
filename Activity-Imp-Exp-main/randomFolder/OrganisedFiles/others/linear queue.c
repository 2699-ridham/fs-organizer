#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct queue
{
  int size;
  int front;
  int rear;
  int *Q;
};
void sqcreate(struct queue*q,int size)
{
    q->size=size;
    q->front=q->rear=-1;
    q->Q=(int*)malloc(q->size*sizeof(int));
}
void sqenqueue(struct queue*q,int x)
{
    if(q->rear==q->size-1)
        printf("queue is full");
    else
    {
        q->rear++;
        q->Q[q->rear]=x;
    }
    }
int sqdequeue(struct queue*q)
{
    int x=-1;
    if(q->front==q->rear)
        printf("queue is empty");
    else{
        q->front++;
        x=q->Q[q->front];
    }
    return x;
    }
void sqdisplay(struct queue q)
{
  int i;
  printf("The Queue elements are:\n");
  for(i=q.front+1;i<=q.rear;i++)
        printf("%d\t",q.Q[i]);
  printf("\n");
}


void main()
{
    struct queue q;
    int ch,a;
    printf("@OMANSH DHAWAN 202 CSE-B\n");
    do{
    printf("\nMENU\n");
    printf("****simple queue****\n");
    printf("1.sqcreate\n");
    printf("2.sqenqueue\n");
    printf("3.sqdequeue\n");
    printf("4.sqdisplay\n");
    printf("0.exit\n");
    printf("enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
                printf("enter the size of simple queue:");
                scanf("%d",&a);
                sqcreate(&q,a);
                break;
        case 2: printf("enter the element in simple queue:");
                scanf("%d",&a);
                sqenqueue(&q,a);
                break;
        case 3: printf("deleted element is:%d",sqdequeue(&q));
                break;
        case 4: sqdisplay(q);
                break;
        case 0: exit(0);

    }
    }while(ch<5);
    getch();
}



