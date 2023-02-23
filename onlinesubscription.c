#include<stdio.h>
int main()
{
    int t , numofpersons , price , var ;
    scanf("%d",&t);
    for(int i = 0 ; i < t ; i++)
    {
        var = 0 ;
        scanf("%d %d",&numofpersons,&price);
        while(numofpersons > 0)
        {
            numofpersons -= 6 ;
            var++ ;
        }
        printf("%d\n",price*var);
    }
    return 0 ;
}
