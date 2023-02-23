#include <stdio.h>
#include <stdlib.h>
#define MAX 5

struct stack
{
    int arr[MAX];
    int top;
};

int isFull(struct stack* s)
{
    if(s->top==MAX-1)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct stack* s)
{
    if(s->top==-1)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct stack* s,int x)
{
    if(isFull(&s))
    {
        printf("push operation not possible!!\n");
    }
    else
    {
        s->top= s->top+1;
        s->arr[s->top]=x;
    }
}

int pop(struct stack* s)
{
    int x;
    if(isEmpty(s))
    {
        printf("pop operation not possible!!\n");
    }
    else
    {
        x = s -> arr[s -> top];
        s -> top = s -> top-1;
        return x;
     }
}


int dequeue(struct stack* s1,struct stack* s2)
{
    if(isEmpty(&s1))
        printf("queue is empty!!\n");
    else
    {
        int a;
        while(!isEmpty(&s1))
        {
            a=pop(&s1);
            enqueue(&s2,a);
        //enqueue(&s2,pop(&s1));
        }
        printf("Hell");
        int x=pop(&s2);
        while(!isEmpty(&s2))
        {
            enqueue(&s1,pop(&s2));
        }
        return x;
    }
   return 0;
}



int topElement(struct stack* s)
{
    return s->arr[s->top];
}
int main()
{
    printf("implementing queue using stack::\n");
    struct stack s1,s2;
    s1.top=-1;
    s2.top=-1;

    enqueue(&s1,3);
    enqueue(&s1,34);
    enqueue(&s1,21);
    enqueue(&s1,56);
//  printf("%d\n",topElement(&s1));


// printf("%d",topElement(&s1));
//     enqueue(&s1,6);
   printf("%d",dequeue(&s1,&s2));
//   printf("hello");
   // peekElement(&s1);

    // printf("%d\n",topElement(&s1));
    // push(&s1,3);
    // push(&s1,4);
    // push(&s1,5);
    // pop(&s1);

    // push(&s2,33);
    // push(&s2,4);
    // push(&s2,53);
    // pop(&s2);
    // push(&s2,45);
    // pop(&s2);
    // printf("%d\n",topElement(&s2));
    return 0;
}
