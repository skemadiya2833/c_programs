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
int operation(int op1, int op2, char oprtr )
{
    if(oprtr == '+')
    {
        return ( op1 + op2 );
    }
    else if(oprtr == '-')
    {
        return ( op1 - op2 );
    }
    else if(oprtr == '/')
    {
        return ( op1 / op2 );
    }
    else if(oprtr == '*')
    {
        return ( op1 * op2 );
    }
}
int main()
{
    int i = 0 , op1 , op2 , res ;
    char str[] = {'3','4','*','5','+','6','-'};
    while(i <= 6)
    {
        if(str[i] >= 48 && str[i] <= 57 )
        {
            str[i] -= 48 ;
            printf("Pushing %d\n",str[i]);
            push(str[i]);
        }
        else
        {
            printf("Opertation %c\n",str[i]);
            op2 = pop();
            op1 = pop();
            printf("Pop %d\n",op1);
            printf("Pop %d\n",op2);
            res = operation(op1,op2,str[i]);
            push(res);
            printf("Pushing = %d\n",res);
        }
        i++;
    }
    printf("ANSWER IS %d",topElement());
  return 0 ;
}

