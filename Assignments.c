#include<stdio.h>

/*digits(int num);
int main()
{
    int num ;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("The number of digits in %d is %d",num,digits(num));
    return 0 ;
}
int digits(int num)
{
    int count = 0 ;

    do
    {
        num = num / 10 ;
        count++ ;
    }
    while(num != 0);

    return count ;
}
*/
/*
int sum(int num);
int main()
{
    int num ;
    printf("Enter the number :");
    scanf("%d",&num);
    printf("Sum of first and last digit is %d",sum(num));
    return 0 ;
}

int sum(int num)
{
    int first , last ;
    last = num % 10 ;
    while(num >= 10)
    {
        num = num / 10 ;
    }
    first = num ;
    return first + last ;
}
*/
/*
int sum(int num);
int main()
{
    int num ;
    printf("Enter the number :");
    scanf("%d",&num);
    printf("Sum of all digits is %d",sum(num));
    return 0 ;
}

int sum(int num)
{
    int sum = 0 , sum2 ;
    while(num > 0)
    {   sum2 = num % 10 ;
        sum = sum2 + sum ;
        num = num / 10 ;
    }
    return sum;
}
*/
/*
int reverse(int num);
int main()
{
    int num ;
    printf("Enter the number :");
    scanf("%d",&num);
    printf("Reverse of %d is %d",num,reverse(num));
    return 0 ;
}

int reverse(int num)
{
    int rev = 0 , rem ;
    while(num != 0)
    {   rem = num % 10 ;
        rev = rev * 10 + rem ;
        num = num / 10 ;
    }
    return rev ;
}
*/
/*
int factorial(int num);
int main()
{
    int num ;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("The Factorial of %d is %d",num,factorial(num));
    return 0;
}

int factorial(int num )
{
    int fact = 1 ;
    for(int i =1 ; i <= num ; i++)
    {
        fact = fact * i ;
    }
    return fact ;
}
*/
