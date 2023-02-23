#include<stdio.h>
int main()
{
    int  n ;
    printf("Enter The Size of array :");
    scanf("%d",&n);
    int a[n] , b [n] , c[n];
    printf("Enter The elements of first array : \n");
    for(int i = 0 ; i < n ; i++ )
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("Enter The Elements of second array : \n");
    for(int i = 0 ; i < n ; i++)
    {
        printf("b[%d] = ",i);
        scanf("%d",&b[i]);
    }
    printf("The Sum of Array's a[%d] and b[%d] is :",n,n);
    for(int i = 0 ; i < n ; i++ )
    {
     c[i] = a[i] + b[i] ;
     printf("\nc[%d] = %d",i,c[i]);
    }
    return 0 ;
}
