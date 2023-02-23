#include<stdio.h>
int max(int *num1 , int *num2);
int main()
{
    int num1 , num2 ;
    printf("Enter the number 1 : ");
    scanf("%d",&num1);
    printf("Enter the number 2 : ");
    scanf("%d",&num2);

    printf("%d is max",max(&num1 , &num2));
    return 0 ;
}

int max(int *num1 , int *num2)
{
    if(*num1 > *num2)
    {
        return *num1;
    }
    else return *num2;
}
