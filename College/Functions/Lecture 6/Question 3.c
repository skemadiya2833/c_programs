#include<stdio.h>
int sumprime(int n);
int main()
{
    int n ;
    printf("Enter The Number :");
    scanf("%d",&n);
    printf("Sum of all prime numbers from 1 to %d is %d",n,sumprime(n));
    return 0 ;
}
int sumprime(int n)
{
    int sum = 0 , flag ;
    for(int i = 2 ; i <= n ; i++ )
    {
        for(int j = 2 ; j <= i/2 ;j++ )
        {
            flag = 0 ;
            if(i%j == 0 )
            {
                flag++ ;
                break ;
            }
        }
    if(flag == 0 )
    {
        sum = sum + i  ;
    }
    }
    return sum ;
}
