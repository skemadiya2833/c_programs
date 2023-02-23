#include<stdio.h>
int sum(int num);
int main()
{
    int num ;
    printf("Enter the number :");
    scanf("%d",&num);
    printf("Sum of all digit of %d is %d",num,sum(num));
    return 0 ;
}
int sum(int num)
{
    int sum = 0 , m ;
    while(num>0)
    {
        m = num % 10 ;
        sum = sum + m ;
        num = num / 10 ;
    }
    return sum ;
}

