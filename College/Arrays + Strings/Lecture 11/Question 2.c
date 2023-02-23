#include<stdio.h>
int main()
{
    int n , sum = 0 ;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter The Elements of array :\n");
    for(int i = 0 ; i < n ; i++ )
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
        sum = sum + arr[i] ;
    }
    printf("The Sum of all elements of Given Array is %d",sum);
    return 0 ;
}

