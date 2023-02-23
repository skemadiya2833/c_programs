#include<stdio.h>
int primefactor(int num);
int main()
{
    int num ;
    printf("Enter The number : ");
    scanf("%d",&num);
    printf("The sum of all prime factor of %d is %d",num,primefactor(num));
    return 0 ;
}
int primefactor(int num)
{
    int sum = 1, check ;
    for(int i = 2 ; i <= num / 2 ;  i++ )
    {
        if( num%i == 0 )
        {
            for(int j = 2 ; j <= i/2 ; j++)
            {
                check = 0 ;
                if(i%j == 0)
                {
                    check++ ;
                    break ;
                }
            }
            if(check == 0 )
                {
                    sum = sum + i ;
                }
        }
    }
    return sum ;
}
