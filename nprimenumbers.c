#include<stdio.h>
int sumofnprime(int n);
int main()
{
    int n ;
    printf("Enter the value of n :");
    scanf("%d",&n);
    printf("The Sum of prime numbers between 1 and %d is %d",n,sumofnprime(n));
    return 0 ;
}
int sumofnprime(int n)
{
    int sum =  0 , i , j , prime  ;
    for(i = 2 ; i <= n ; i++)
    {
        prime = 1 ;
        for(int j = 2 ; j <= i/2 ; j++)
        {
         if(i%j==0)
         {
             prime = 0 ;
             break ;
         }
        }
        if(prime == 1)
        {
            sum = sum + i ;
        }
    }
    return sum ;
}
