#include<stdio.h>
int fact(int num);
int main()
{
    int num ;
    printf("Enter the number :");
    scanf("%d",&num);
    printf("Factorial of %d is %d",num,fact(num));
    return 0 ;
}
int fact(int num)
{
    int fact = 1 ;
    for(int i = num ; i > 1 ; i--)
    {
        fact = fact * i ;
    }
    return fact ;
}
