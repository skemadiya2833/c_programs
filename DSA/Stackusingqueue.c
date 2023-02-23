#include<stdio.h>
#define MAX 10
struct queue
{
    int a[MAX];
    int front  ;
    int rear ;
    int counter;
};
int isEmpty(struct queue *q)
{
    if(q->counter == 0)
        return 1 ;
    else
        return 0 ;
}
int isFull(struct queue *q)
{
    if(q->counter == MAX )
        return 1 ;
    else
        return 0 ;
}
void Enqueue(struct queue *q, int x)
{
    if(isFull(q))
        printf("Operation Not Possible");
    else if(q->rear == -1)
    {
        q->rear++;
        q->front++;
        q->a[q->rear] = x ;
        q->counter++;
        printf("Enqueue Element is %d\n",x);
    }
    else
    {
        q->rear = (q->rear + 1)%MAX;
        q->a[q->rear] = x ;
        q->counter++;
        printf("Enqueue Element is %d\n",x);
    }
}
int deque(struct queue *q)
{
    if(isEmpty(q))
    {
        printf("Operation Not Possible");
    }
    else
    {
        int x ;
        x = q->a[q->front];
        q->front = (q->front+1)%MAX ;
        q->counter++;
        return x ;
    }
    return -1 ;
}
int main()
{
    struct queue q;
    q.front = -1 ;
    q.rear = -1;
    q.counter = 0;
    Enqueue(&q,23);
    Enqueue(&q,33);
    printf("Dequeue is %d\n",deque(&q));
    printf("Dequeue is %d\n",deque(&q));
    return 0 ;
}
