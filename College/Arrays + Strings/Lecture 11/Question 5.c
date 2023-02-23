#include<stdio.h>
int main()
{
    int size ;
    printf("Enter the Size of array :");
    scanf("%d",&size);
    int arr[size] , position , swap ;
    printf("Enter the elements of array :\n");
    for(int i = 0 ;i < size ; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i < size - 1 ; i++ )
    {
        position = i ;
        for(int j = i + 1 ; j < size ; j++ )
        {
            if(arr[position] > arr[j])
                position = j ;
        }
        if(position != i )
        {
            swap = arr[i] ;
            arr[i] = arr[position] ;
            arr[position] = swap ;
        }
    }
    printf("Sorted Array : \n");
    for(int i = 0 ; i < size ; i++)
    {
        printf("a[%d] = %d\n",i,arr[i]);
    }
    return 0 ;
}
