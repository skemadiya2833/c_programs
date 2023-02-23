#include<stdio.h>
void fabonicci(int n)
{
    static int n1 = 0 , n2 = 1 , n3 ;
    if( n > 0 )
    {
        n3 = n1 + n2 ;
        n1 = n2 ;
        n2 = n3 ;
        printf("%d ",n3);
        fabonicci( n - 1 );
    }
}
int main()
{
    int n ;
    printf("Enter The value of n :");
    scanf("%d",&n);
    printf("Fabonicci Series :\n%d %d ",0,1);
    fabonicci(n-2);
    return 0 ;
}
