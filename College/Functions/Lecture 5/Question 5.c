#include<stdio.h>
int sumofnprime(int n);
int main()
{
    int n ;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("The sum of all prime numbers up to %d is %d",n,sumofnprime(n));
    return 0 ;
}
int sumofnprime(int n)
{
    int sum = 0 , prime ;
    for(int i = 2 ; i <= n ; i++ )
    {
        prime = 0 ;
        for(int j = 2; j <= i/2 ; j++)
        {
            if(i%j == 0 )
            {
                prime = 1 ;
                break ;
            }
        }
        if(prime == 0 )
        {
            sum = sum + i ;
        }
    }
    return sum ;
}
