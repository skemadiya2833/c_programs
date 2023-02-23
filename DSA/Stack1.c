#include<stdio.h>
#include<string.h>
#define MAX 10
char stack[MAX] ;
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
void push(char x)
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
    printf("%c\n",stack[top]);
}
char pop()
{
    if(isEmpty())
    {
        printf("POP not Possible");
    }
    else
    {
        char x ;
        x = stack[top];
        top-- ;
        return x ;
    }
    return -1 ;
}
char topElement()
{
    return (stack[top]) ;
}
int main()
{
    int i = 0 , j = 0;
    char str[] = "bcabc";
    while(str[i] != '\0')
    {
        if(isEmpty())
        {
            push(str[i]);
        }
        else if(str[i] > topElement())
                {
                    char temp = pop() ;
                    push(str[i]);
                    push(temp);
                }
                else if(str[i] < topElement())
                {
                    push(str[i]);
                }
        i++ ;
    }
    while(!isEmpty())
    {
       printf("%c ",pop());
    }
  return 0 ;
}
