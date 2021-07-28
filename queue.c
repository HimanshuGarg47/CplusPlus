#include <stdio.h>
#include <stdlib.h>
struct Queue 
{
    int front;
    int rear;
    int size;
    int *q;
};

void create(struct Queue *Q,int size)
{
    Q->size = size;
    Q->front = Q->rear = -1;
    Q->q = (int *)malloc(size*sizeof(int));

}

void enqueue(struct Queue *Q,int x)
{
    if(Q->rear < Q->size-1)
    Q->q[++Q->rear] = x;
    else
    printf("Queue is full\n");
}

int dequeue(struct Queue *Q)
{
    int x = -1;
    if(Q->front == Q->rear)
    printf("Stack is empty\n");
     else            //(Q->front!=Q->rear)
     {
        Q->front++;
        x = Q->q[Q->front];

     }
     return x; 
}

void Display(struct Queue Q)
{
    if(Q.front!=Q.rear)
    {
        int i;
        for(i = Q.front+1;i<=Q.rear;i++)
        {
           printf("%d ",Q.q[i]);
        }
        printf("\n");
    }
}
int main()
{
    struct Queue q;
    create(&q,4);
    enqueue(&q,1);
        enqueue(&q,22);

    enqueue(&q,33);

    enqueue(&q,54);
    Display(q);
    printf("Dequeue element is %d\n",dequeue(&q));


}