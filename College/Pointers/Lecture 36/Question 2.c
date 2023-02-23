#include<stdio.h>
int fact(int *num);
int main()
{
    int num ;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("%d is factorial of %d",fact(&num),num);
    return 0 ;
}
int fact(int *num )
{
    int fact = 1 ;
    while( *num > 1)
    {
        fact = fact * *num ;
        *num = *num - 1 ;
    }
    return fact;
}
