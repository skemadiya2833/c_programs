#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data ;
    struct Node* next ;
};
struct Node* start = NULL;
void createlist()
{
    if (start == NULL) {
        int n ;
        printf("\nEnter the number of Nodes: ");
        scanf("%d",&n);
        if (n != 0) {
            struct Node* newNode;
            struct Node* temp;
            newNode = (int*)malloc(sizeof(struct Node));
            start = newNode;
            temp = start;
            printf("\nEnter number to be inserted : ");
            scanf("%d",&start->data);
            for (int i = 2; i <= n; i++)
            {
                newNode = malloc(sizeof(struct Node));
                temp->next = newNode;
                printf("\nEnter number to be inserted : ");
                scanf("%d", &(newNode->data));
                temp = temp->next;
            }
          printf("\nThe list is created\n");
        }
    }
    else
    {
        printf("\nList Already Exist.\n");
    }
}
void insertatfront()
{
    int info ;
    struct Node* temp;
    temp = (int*)malloc(sizeof(struct Node));
    printf("\nEnter number to be inserted : ");
    scanf("%d",&info);
    temp->data = info;
    temp->next = start;
    start = temp;
}
void insertatend()
{
    int info;
    struct Node *temp, *head;
    temp = (int*)malloc(sizeof(struct Node));
    printf("\nEnter number to be inserted : ");
    scanf("%d",&info);
    temp->next = 0;
    temp->data = info;
    head = start;
    while (head->next != NULL)
    {
        head = head->next;
    }
    head->next = temp;
}
void traverse()
{
    struct Node *temp;
    if (start == NULL)
        printf("\nList is empty\n");
    else
    {
        temp = start ;
        while (temp != NULL)
        {
            printf("Data = %d\n",temp->data);
            temp = temp->next;
        }
    }
}
int main()
{
    int choice ;
    while(1)
    {
//        system("cls");
        printf("\t\tLinked List\n");
        printf("1. Create A list\n");
        printf("2. Insert At Front\n");
        printf("3. Insert At End\n");
        printf("4. Traverse\n");
        printf("5. Exit\n");
        printf("\tEnter Your Choice (e.g. 2) : ");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1 :
                createlist();
                break;
            case 2 :
                insertatfront();
                break;
            case 3 :
                insertatend();
                break;
            case 4 :
                traverse();
                break;
            case 5 :
                exit(1);
            default :
                printf("Invalid Choice.\n");
        }
    }
    return 0 ;
}
