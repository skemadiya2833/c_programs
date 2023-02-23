#include<stdio.h>
int linear_search(int arr[] , int size , int key );
int main()
{
    int size ;
    printf("Enter the size of Array :");
    scanf("%d",&size);
    int arr[size] , i , key ;
    printf("Enter the elements of array :\n");
    for(i = 0 ; i < size ; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the Key to Search : ");
    scanf("%d",&key);
    printf("The Key(%d) is present %d index ",key,linear_search(arr,size,key));
    return 0 ;
}
int linear_search(int arr[],int size, int key)
{
    int index ;
    for(index = 0 ; index < size ; index++)
    {
        if(key == arr[index])
        {
            return index ;
        }
    }
    return (-1);
}
