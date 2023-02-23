#include<stdio.h>
int sumofdigits(int num, int sum);
int main()
{
    int num ;
    printf("Enter the number :");
    scanf("%d",&num);
    printf("The Sum of All digits of %d is %d",num,sumofdigits(num,0));
    return 0 ;
}
int sumofdigits(int num,int sum)
{
    if(num <= 10)
    {
        return (sum + (num%10));
    }
    else
    {
        sum = sum + (num%10);
        sumofdigits(num/10,sum);
    }
}

