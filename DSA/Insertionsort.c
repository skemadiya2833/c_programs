#include<stdio.h>
void insertion_sort(int arr[],int size)
{
    int i , j , t ;
    for( i = 1 ;i < size ; i++)
    {
        t = arr[i] ;
        j = i - 1 ;
        while(t < arr[j] && j >= 0 )
        {
            arr[j+1] = arr[j] ;
                j-- ;
        }
            arr[j+1] = t ;
    }
}
int main()
{
     int size , i ;
    printf("Enter the size of Array :");
    scanf("%d",&size);
    int arr[size] ;
    printf("Enter the elements of array :\n");
    for(i = 0 ; i < size ; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    insertion_sort(arr,size);
    printf("Sorted Array is :\n");
    for(i = 0 ; i < size ; i++)
    {
        printf(" %d ",arr[i]);
    }
    return 0 ;
}
