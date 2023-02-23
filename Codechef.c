#include <stdio.h>
int main()
{
	int t , x , y ;
	scanf("%d",&t);
	for(int i = 0 ; i < t ; i++)
	{
	    scanf("%d %d",&x,&y);
	    x = x-y ;
	    if(x < 0)
	    {
	        x = x * -1 ;
	    }
	    printf("%d",x);
	}
	return 0;
}
