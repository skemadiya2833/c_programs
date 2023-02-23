#include<stdio.h>
int sum(int num);
int main()
{
    int num ;
    printf("Enter the number :");
    scanf("%d",&num);
    printf("Sum of first and last digit of %d is %d",num,sum(num));
    return 0 ;
}
int sum(int num)
{
    int sum , f , l;
    l = num % 10 ;
    while(num>10)
    {
        num = num / 10 ;
        f = num % 10 ;
    }
    sum = f + l ;
    return sum ;
}
