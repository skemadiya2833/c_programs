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
void main()
{
   int i , j = 0 , k;
   int arr[4][4]= {0,1,0,0,0,0,0,1,1,0,0,0,0,0,1,0};
  /* printf("Enter the Element of Adjacency matrix:\n");
   for(int l = 0 ; l < 4 ; l++)
    {
        for( int m = 0 ; m < 4 ; m++)
        {
            printf("arr[%d][%d] = ",l,m);
            scanf("%d",&arr[l][m]);
        }
    }*/
   int ready[4] = {1,1,1,1};
   int explore[4] = {0,0,0,0};
   enqueue(0);
   while(!isEmpty())
   {   k = dequeue();
       explore[j] = k ;
       j++;
       for(i = 0 ; i < 4 ; i++ )
       {
           if(arr[k][i] == 1 && ready[i] == 1)
           {
                enqueue(i);
                ready[i] = 0 ;
           }
       }
   }
   printf("BFS traverse is\n");
   for(i = 0 ; i < 4 ; i++)
   {
       printf("%d\t",explore[i]);
   }
}
