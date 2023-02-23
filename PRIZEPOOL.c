#include <stdio.h>
int main()
{
    int t , x , y , ans ;
    scanf("%d",&t);
    for(int i = 0 ; i < t ; i++)
    {
        scanf("%d %d",&x,&y);
        ans = (10*x) + (90*y) ;
        printf("%d\n",ans);
    }
	return 0;
}


