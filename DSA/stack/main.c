#include<stdio.h>
#define MAX 10
int stack[MAX] ;
int top = -1;
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
int main()
{
    push(23);
    printf("Top element IS %d",pop());
  return 0 ;
}

