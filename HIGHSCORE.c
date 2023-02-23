#include <stdio.h>
int main()
{
    int t , n , i , j , arr[4] , max ;
    scanf("%d",&t);
    for(i = 0 ; i < t ; i++)
    {   max = 0 ;
        scanf("%d",&n);
        for(j = 0 ; j < 4 ; j++ )
        {
            scanf("%d",&arr[j]);
            if( max < arr[j] )
            {
                max = arr[j] ;
            }
        }
        printf("%d\n",max);
    }
	return 0;
}
