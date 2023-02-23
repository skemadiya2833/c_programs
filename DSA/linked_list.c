#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data ;
    struct Node *ptr ;
};
int main()
{
    struct Node *head ;
    head = (struct Node * )malloc(sizeof(struct Node));
    if(head == NULL)
    {
        printf("\n Memory Could Not be Allocated ");
        exit(0);
    }
    printf("\nEnter Data :");
    scanf("%d",&head->data);
    head->ptr = NULL ;
    head->ptr = (struct Node *)malloc(sizeof(struct Node *));
    printf("\nEnter Data :");
    scanf("%d",&head->ptr->data);
    free(head->ptr);
    head->ptr = NULL ;
    return 0 ;
}
