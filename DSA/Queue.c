#include<stdio.h>
#define MAX 10
int queue[MAX];
int front = -1 , rear = -1 ,counter = 0;
int isEmpty()
{
    if(counter == 0)
        return 1 ;
    else
        return 0 ;
}
int isFull()
{
    if(counter == MAX - 1)
        return 1 ;
    return 0 ;
}
void enqueue(int x)
{
    if(isFull())
    {
        printf("Operation Not Possible");
    }
    else
    {
        if(rear == -1)
        {
            rear++ ;
            front++ ;
            queue[rear] = x ;
            counter++ ;
        }
        else
        {
            rear = (rear + 1) % MAX ;
            queue[rear] = x ;
            counter++ ;
        }

    }
}
int dequeue()
{
    if(isEmpty())
    {
        printf("Operation Not Possible\n");
    }
    else
    {
        int x ;
        x = queue[front];
        front = (front +1) % MAX ;
        counter--;
        return x ;
    }
    return -1 ;
}
int printqueue()
{
    for(int i = front ; i <= rear ;i++)
    {
        printf("%d\t",queue[i]);
    }
}
void main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    printqueue();
    printf("\n\tDeleted element is :%d\t\n",dequeue());
    printqueue();
}