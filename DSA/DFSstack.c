#include<stdio.h>
#define MAX 10
int stack[MAX] ;
int top = -1 ;
int isEmpty()
{
    if(top == -1 )
        return 1 ;
    else
        return 0 ;
}
int isFull()
{
    if(top == MAX - 1)
        return 1 ;
    else
        return 0 ;
}
void push(int x)
{
    if(isFull())
    {
        printf("push not Possible");
    }
    else
    {
        top++ ;
        stack[top] = x ;
    }
    printf("%d\n",stack[top]);
}
int pop()
{
    if(isEmpty())
    {
        printf("POP not Possible");
    }
    else
    {
        int x ;
        x = stack[top];
        top-- ;
        return x ;
    }
    return -1 ;
}
int topElement()
{
    return (stack[top]) ;
}
void main()
{
   int i , j = 0 , k;
   int arr[4][4] = {0,1,0,0,0,0,0,1,1,0,0,0,0,0,1,0};
   printf("Enter the Element of Adjacency matrix:\n");
   /**for(int l = 0 ; l < 4 ; l++)
    {
        for( int m = 0 ; m < 4 ; m++)
        {
            printf("arr[%d][%d] = ",l,m);
            scanf("%d",&arr[l][m]);
        }
    }
    */
   int ready[4] = {1,1,1,1};
   int explore[4] = {0,0,0,0};
   push(0);
   while(!isEmpty())
   {   k = pop();
       explore[j] = k ;
       j++;
       for(i = 0 ; i < 4 ; i++ )
       {
           if(arr[k][i] == 1 && ready[i] == 1)
           {
                push(i);
                ready[i] = 0 ;
           }
       }
   }
   printf("DFS traverse is\n");
   for(i = 0 ; i < 4 ; i++)
   {
       printf("%d\t",explore[i]);
   }
}

