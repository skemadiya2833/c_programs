#include<stdio.h>
void selectionsort(int arr[], int size);
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
    selectionsort(arr,size);
    printf("Sorted Array is :\n");
    for(i = 0 ; i < size ; i++)
    {
        printf(" %d ",arr[i]);
    }
    return 0;
}
void selectionsort(int arr[], int size )
{
    int i , j ,min , temp;
    for( i = 0 ; i < size - 1 ; i++ )
    {   min = i ;
        for( j = i+1 ; j < size ; j++ )
        {
            if(arr[j] < arr[min])
            {
                min = j ;
            }
        }
        temp = arr[min] ;
        arr[min] = arr[i];
        arr[i] = temp ;
    }
}
