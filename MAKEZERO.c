#include <stdio.h>
int main()
{
    int t , n , i , j , k , var , count ;
    scanf("%d",&t);
    for(i = 0 ; i < t ; i++)
    {
        count = 0 ;
        scanf("%d",&n);
        int arr[n] ;
        for(j = 0 ; j < n ; j++)
        {
            scanf("%d",&arr[j]);
        }
        for(j = 0 ; j < n ; j++)
        {
            for(k = j ; k < n ; k++ )
            {
                if(arr[j] != 0 && arr[j+k] != 0 )
                {
                    if(arr[j] > arr[j+k])
                    {
                        var = power(arr[j]);
                        arr[j] -= var ;
                        arr[j+k] -= var ;
                        count++ ;
                    }
                    else
                    {
                        var = power(arr[j+k]);
                        arr[j] -= var ;
                        arr[j+k] -= var ;
                        count++ ;
                    }
                }
            }
        }
        printf("%d\n",count);
    }
	return 0;
}
int power(int x)
{
    int product = 1 ;
    while(product > x)
    {
        product = product * 2 ;
    }
    return product ;
}

