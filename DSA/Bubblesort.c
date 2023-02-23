#include<stdio.h>
void bubble_sort(int arr[],int size)
{
    int i , j , t ,flag = 0 ;
    for( i = 0 ; i <= size - 2 && flag == 0; i++)
    {
        flag = 1 ;
        printf("Pass : %d\n",i+1);
        for(j = 0 ; j < size -1 ; j++ )
        {
            if( arr[j] > arr[j+1] )
            {
                t = arr[j] ;
                arr[j] = arr[j+1] ;
                arr[j+1] = t ;
                flag = 0 ;
            }
        }
    }
}
int main()
{
    int size = 5 , i ;
    printf("Enter the size of Array :");
    scanf("%d",&size);
    int arr[] = { 1,3,2,4,5} ;
    printf("Enter the elements of array :\n");
    for(i = 0 ; i < size ; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    bubble_sort(arr,size);
    printf("Sorted Array is :\n");
    for(i = 0 ; i < size ; i++)
    {
        printf(" %d ",arr[i]);
    }
    return 0 ;
}

