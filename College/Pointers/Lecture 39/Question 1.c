#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    int arr[n];
    int *ptr = arr ;
    printf("Enter the elements of array :\n");
    for(int i = 0 ; i < n ; i++)
    {
     scanf("%d",&*(ptr + i));
    }
    printf("The Elements of array are :\n");
    for(int i = 0 ; i < n ; i++ )
    {
        printf("arr[%d] = %d\n",i,*(ptr + i));
    }
    return 0 ;
}
