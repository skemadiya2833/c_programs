#include<stdio.h>
void quick_sort(int arr[],int l , int u );
int partition(int arr[], int l , int u );

int main()
{
    int size , i , l , u;
    printf("Enter the size of Array :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array :\n");
    for(i = 0 ; i < size ; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    l = 0 ;
    u = size ;
    quick_sort(arr,l,u);
    printf("Sorted Array is :\n");
    for(i = 0 ; i < size ; i++)
    {
        printf(" %d ",arr[i]);
    }
    return 0 ;
}
void quick_sort(int arr[],int l , int u )
{
    if(l < u)
    {
        int j = partition(arr,l,u);
        quick_sort(arr,l,j-1);
        quick_sort(arr,j+1,u);
    }
}
int partition(int arr[], int l , int u)
{
    int piv = arr[l] , i = l , j = u , t ;
    while(i < j)
    {
        while(arr[i] <= piv && i < u) i++ ;
        while(arr[j] > piv ) j-- ;
        if( i < j )
        {
            t = arr[i] ;
            arr[i] = arr[j] ;
            arr[j] = t ;
        }
    }
    t = arr[l] ;
    arr[l] = arr[j] ;
    arr[j] = t  ;
    return j ;
}
