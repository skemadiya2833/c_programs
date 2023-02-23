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
    printf("%d\n",stack[top]);
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
    else if(oprtr == '$')
    {
        return 3;
    }
}
int main()
{
    int i = 0 , j = 0;
    char str[] = "3+4*5-6";
    char pstr[7];
    while(str[i] != '\0')
    {
        if(str[i] >= '0' && str[i] <= '9' )
        {
            pstr[j] = str[i];
            j++ ;
        }
        else
        {
            if(isEmpty()) push(str[i]);
            else
            {
                int a, b ;
                a = preceed(topElement());
                b = preceed(str[i]);
                if(a < b)
                {
                    push(str[i]);
                }
                else if(a < b)
                {
                    push(str[i]);
                }
                else
                {
                    while(!isEmpty() && b <= a)
                    {
                        pstr[j] = pop();
                        j++ ;
                    }
                    push(str[i]);
                }
            }
        }
        i++;
    }
    while(!isEmpty())
    {
        pstr[j] = pop();
        j++ ;
    }
    pstr[j] = '\0';
    printf("ANSWER IS : ");
    for(i = 0 ; pstr[i] != '\0' ; i++ )
    {
        printf("%c ",pstr[i]);
    }
  return 0 ;
}
