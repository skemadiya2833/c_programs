#include<stdio.h>
#define MAX 4
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
    char str[10] = {1,1,2,3,4,1,2,1,5} ;
    int hit = 0 , miss = 0 ,i = 0,j,flag ;
    while(str[i] != '\0')
    {
        flag = 0 ;
        for(j = front ; j != rear && !isEmpty() ;j = (j+1)%MAX)
        {
            if(str[i] == queue[j])
            {
                hit++ ;
                flag = 1 ;
            }
        }
            if(str[i] == queue[j])
            {
                hit++ ;
                flag = 1 ;
            }
        if(flag == 0)
        {
            if(isFull())
            {
                    dequeue();
                    enqueue(str[i]);
                    miss++;
            }
            else
            {
                enqueue(str[i]);
                miss++ ;
            }
        }
    i++ ;
    }
    printf("Number of Hit : %d\n",hit);
    printf("Number of Miss : %d",miss);

}
