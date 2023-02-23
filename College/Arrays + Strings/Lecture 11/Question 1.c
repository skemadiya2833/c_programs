#include<stdio.h>
int main()
{
    int n ;
    float sum = 0 , avg ;
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
    avg = sum / n ;
    printf("The Average of Given Array is %.2f",avg);
    return 0 ;
}
