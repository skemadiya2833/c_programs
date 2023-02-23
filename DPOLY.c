#include <stdio.h>
int main()
{
    int t , n , ans , i,j ;
    scanf("%d",&t);
    for(i = 0 ; i < t ; i++)
    {
        scanf("%d",&n);
        int arr[n] ;
        ans = 0 ;
        for(j = 0 ; j < n ; j++ )
        {
            scanf("%d",&arr[j]);
            if(arr[j] != 0 )
            {
                ans = j ;
            }
        }
        printf("%d\n",ans);
    }
	return 0;
}


