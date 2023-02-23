#include<stdio.h>
int binary_search(int arr[],int l, int u, int key)
{
    int mid = ( l + u ) / 2 ;
    if(l > u)
    {
        return -1 ;
    }
    if(arr[mid] == key)
    {
        return mid ;
    }
    else if(arr[mid] > key )
    {
        u = mid - 1 ;
        printf("Run\n");
        binary_search(arr,l,u,key );
    }
    else if(arr[mid] < key )
    {
        printf("Run\n");
        l = mid + 1 ;
        binary_search(arr,l,u,key );
    }
}
int main()
{
    int size , i , l, u , key ;
    printf("Enter the size of Array :");
    scanf("%d",&size);
    int arr[size] ;
    l = 0 ;
    u = size ;
    printf("Enter the elements of array :\n");
    for(i = 0 ; i < size ; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to search : ");
    scanf("%d",&key);
    printf("Element(%d) is present at %d index",key,binary_search(arr,l,u,key) );
    return 0 ;
}

