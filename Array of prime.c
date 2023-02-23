#include<stdio.h>
int main()
{
    int n , i , j , add = 0 ;
    printf("Enter the Size of Array : ");
    scanf("%d",&n);
    int arr[n] , arrprime[n];
    printf("Enter the elements of array :\n");
    for(i = 0 ; i < n ; i++ )
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    int flag , num ;
    for(i = 0 ; i < n ; i++)
    {
        flag = 1 ;
        num = arr[i] ;
        if(num == 1 || num == 0)
        {
            flag = 1 ;
        }
        for(j = 2 ; j <= num/2 ; j++)
        {
            if(num % j == 0)
            {
                flag = 0 ;
                break ;
            }
        }
        if(flag == 1 )
        {
            arrprime[add] = arr[i] ;
            add++ ;
        }
    }
    printf("The ARRAY of Prime numbers is :\n");
    for(i = 0 ; i < add ; i++)
    {
        printf("Arrprime[%d] = %d\n",i,arrprime[i]);
    }
    return 0 ;
}
