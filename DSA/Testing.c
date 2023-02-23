#include<stdio.h>
#include<string.h>
#define MAX 10
char stack[MAX] ;
int top ;
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
int preceed( char oprtr )
{
    if(oprtr == '+' || oprtr == '-')
    {
        return 1;
    }
    else if(oprtr == '*' || oprtr == '/')
    {
        return 2;
    }
    else
    {
        return 3;
    }
}
int main()
{
    int i = 0,j=0 , a, b;
    char str[] = {'3','+','4','*','5','-','6','\0'};
    char oprtr, pstr[7];
    while(!str[i] != '\0')
    {
        if(str[i] >= 48 && str[i] <= 57 )
        {
            pstr[j] = str[i];
            j++ ;
        }
        else
        {   if(isEmpty()) push(str[i]);
            else
            {
                a = preceed(topElement());
                b = preceed(str[i]);
                if(a < b)
                {
                    push(str[i]);
                }
                else
                {
                    while(!isEmpty() && b < a )
                    {
                        pstr[j] = pop();
                        j++;
                    }
                }
            }
        }
        i++;
    }
    while(!isEmpty())
    {
        pstr[j]=topElement();
        j++;
    }
    pstr[j]='\0';
    printf("ANSWER IS : ");
    puts(pstr);
  return 0 ;
}

