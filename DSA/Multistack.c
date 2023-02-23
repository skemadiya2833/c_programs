#include<stdio.h>
#define MAX 10
struct stack
{
    char a[MAX] ;
    int top ;
};
struct stack s1,s2;
int isEmpty(struct stack *S)
{
    if(S->top == -1 )
        return 1 ;
    else
        return 0 ;
}
int isFull(struct stack *S)
{
    if(S->top == MAX - 1)
        return 1 ;
    else
        return 0 ;
}
void push(struct stack *S , char x)
{
    if(isFull(S))
    {
        printf("push not Possible");
    }
    else
    {
        S->top = S->top + 1 ;
        S->a[S->top] = x ;
    }
    printf("%c\n",S->a[S->top]);
}
char pop(struct stack *S)
{
    if(isEmpty(S))
    {
        printf("POP not Possible");
    }
    else
    {
        char x ;
        x = S->a[S->top];
        S->top = S->top - 1 ;
        return x ;
    }
    return -1 ;
}
char topElement(struct stack *S)
{
    return (S->a[S->top]) ;
}
int main()
{
    push(&s1,'A');
    push(&s2,'B');
    push(&s2,'C');
    push(&s1,'S');
    printf("\nPopped element is %c",pop(&s1));
    printf("\nPopped element is %c",pop(&s2));
    printf("\nPopped element is %c",pop(&s2));
    printf("\nPopped element is %c",pop(&s1));
  return 0 ;
}
