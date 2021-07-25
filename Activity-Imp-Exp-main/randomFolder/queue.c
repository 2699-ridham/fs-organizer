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
void cqcreate(struct queue*q,int size)
{
    q->size=size;
    q->front=q->rear=0;
    q->Q=(int*)malloc(q->size*sizeof(int));
}
void cqenqueue(struct queue*q,int x)
{
    if((q->rear+1)%q->size==q->front)
        printf("queue is full");
    else
    {
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear]=x;
    }
    }
int cqdequeue(struct queue*q)
{
    int x=-1;
    if(q->front==q->rear)
        printf("queue is empty");
    else{
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    }
    return x;
    }
void cqdisplay(struct queue q)
{
  int i=q.front+1;
  printf("The Queue elements are:\n");
  do{
      printf("%d\t",q.Q[i]);
      i=(i+1)%q.size;
  } while(i!=(q.rear+1)%q.size);
      printf("\n");
}
void dencreate(struct queue*q,int size)
{
    q->size=size;
    q->front=q->rear=-1;
    q->Q=(int*)malloc(q->size*sizeof(int));
}
void denfrontpush(struct queue*q,int x)
{
    if((q->front==0&&q->rear==q->size-1)||(q->front==q->rear + 1))
      printf("queue is full\n");

    else
    {
    	if(q->front==-1)
    		q->front=q->rear=0;

        else if(q->front==0)
            q->front=q->size-1;

        else
            --(q->front);

        q->Q[q->front]=x;
  }
}
void denbackpush(struct queue*q,int x)
{
    if((q->front==0&&q->rear==q->size-1)||(q->front==q->rear + 1))
      printf("queue is full\n");

    else
    {
    	if(q->front==-1)
    		q->front=q->rear=0;

        else if(q->rear==q->size-1)
            q->rear=0;

        else
            ++(q->rear);

        q->Q[q->rear]=x;
        }
}
int denpopfront(struct queue*q)
{
    int x=-1;
    if(q->front==-1)
        printf("queue is empty\n");

    else
    {
        if(q->front==q->rear)
        	q->front=q->rear=-1;

        else if(q->front==q->size-1)
        	q->front=0;

        else{
            x=q->Q[q->front];
        	(q->front)++;
        }

    }
    return x;
}
int denpopback(struct queue*q)
{
    int x=-1;
    if(q->front==-1)
        printf("queue is empty\n");

    else
    {
        if(q->front==q->rear)
        	q->front=q->rear=-1;

        else if(q->rear==0)
        	q->rear=q->size-1;

        else{
             x=q->Q[q->rear];
        	(q->rear)--;
        }

    }
    return x;
}
void dendisplay(struct queue q)
{ int i=q.front;
  printf("The Queue elements are(front to rear):\n");
  do{
      printf("%d\t",q.Q[i]);
      i=(i+1)%q.size;
  } while(i!=(q.rear+1)%q.size);
      printf("\n");
}


void main()
{
    struct queue q;
    int ch,a;
    do{
    printf("\nMENU\n");
    printf("****simple queue****\n");
    printf("1.sqcreate\n");
    printf("2.sqenqueue\n");
    printf("3.sqdequeue\n");
    printf("4.sqdisplay\n");
    printf("****circular queue****\n");
    printf("5.cqcreate\n");
    printf("6.cqenqueue\n");
    printf("7.cqdequeue\n");
    printf("8.cqdisplay\n");
    printf("****double ended queue****\n");
    printf("9.dencreate\n");
    printf("10.denfrontpush\n");
    printf("11.denbackpush\n");
    printf("12.denpopfront\n");
    printf("13.denpopback\n");
    printf("14.dendisplay\n");
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
        case 5: printf("enter the size of circular queue:");
                scanf("%d",&a);
                cqcreate(&q,a);
                break;
        case 6: printf("enter the element in circular queue:");
                scanf("%d",&a);
                cqenqueue(&q,a);
                break;
        case 7: printf("deleted element is:%d",cqdequeue(&q));
                break;
        case 8: cqdisplay(q);
                break;
        case 9: printf("enter the size of double ended queue:");
                scanf("%d",&a);
                dencreate(&q,a);
                break;
        case 10:printf("enter the element at front in double ended queue:");
                scanf("%d",&a);
                denfrontpush(&q,a);
                break;
        case 11:printf("enter the element at back in double ended queue:");
                scanf("%d",&a);
                denbackpush(&q,a);
                break;
        case 12:printf("deleted element from front is:%d",denpopfront(&q));
                break;
        case 13:printf("deleted element from back is:%d",denpopback(&q));
                break;
        case 14:dendisplay(q);
                break;
        case 0: exit(0);

    }
    }while(ch<15);
    getch();
}

