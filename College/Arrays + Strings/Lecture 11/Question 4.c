#include<stdio.h>
void binary_search(int arr[] ,int size , int key );
int main()
{
    int size , key ;
    printf("Enter The size of array :");
    scanf("%d",&size);
    int arr[size] ;
    printf("Enter the Elements of array in sorted order :\n");
    for(int i = 0 ; i < size ; i++ )
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter The Element to search : ");
    scanf("%d",&key);
    binary_search(arr[size],size,key);
    return 0 ;
}
void binary_search(int arr[],int size,int key)
{
    int a = 0 , h = size , mid  ;
    for(int i = 0 ; i <= mid ; i++ )
    {
        mid = ( a + h ) / 2 ;
        if(arr[mid] == key  )
        {
            printf("The element is present at a[%d]",mid) ;
            break ;
        }
        else if( key > arr[mid] )
        {
            a = mid + 1 ;
        }
         else
        {
             h = mid - 1 ;
        }

        }
    if(a > h)
        {
            printf("Element not present in the array.");
        }
}
