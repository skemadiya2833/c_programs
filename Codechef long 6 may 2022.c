#include <stdio.h>
int main()
{
    int t , n , x , y , ans , r , c ;
    scanf("%d",&t);
    for(int i = 0 ; i < t ; i++)
    {
        scanf("%d %d %d",&n,&x,&y);
        int arr[n][n] ;
        ans = 0 ;
        x-- ;
        y-- ;
        for( r = 0 ; r < n ; r++ )
        {
            for(c = 0 ; c < n ; c++)
            {
               if( r == x || c == y  )
                {
                    ans++ ;
                }
            }
        }

        printf("%d\n",ans);
    }
	return 0;
}


