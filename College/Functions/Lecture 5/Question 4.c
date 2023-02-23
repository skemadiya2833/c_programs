#include<stdio.h>
#include<stdbool.h>
bool prime_check(int num);
int main()
{
    int num , flag = 0 ;
    printf("Enter the number :");
    scanf("%d",&num);
    flag = prime_check(num);
    if(flag == 0)
    {
        printf("%d is a prime number.",num);
    }
    else
    {
        printf("%d is not a prime number.",num);
    }
    return 0;
}
bool prime_check(int num)
{
    int check = 0 ;
    if(num == 0 || num == 1)
    {
        return check ;
    }
    else
    {
    for(int i = 2 ; i <= (num/2) ; i++)
    {
        if(num%i == 0)
        {
           check++ ;
           break ;
        }
    }
    return check ;
    }
}
