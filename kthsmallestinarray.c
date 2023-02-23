#include<stdio.h>
int main()
{
    int size ;
    printf("Enter the Size of Array : ");
    scanf("%d",&size);
    int arr[size] , i ,j , k , min , temp ;
    printf("Enter the elements of array :\n");
    for(i= 0; i < size ; i++)
    {
        printf("Arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    for(i = 0 ; i < size ; i++)
    {
        for(j = i ; j < size ; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i] ;
                arr[i] = arr[j] ;
                arr[j] = temp ;
            }
        }
    }
    printf("Enter the Value of k : ");
    scanf("%d",&k);
    printf("The %d minimum value is %d",k,arr[k-1]);
    return 0 ;
}

