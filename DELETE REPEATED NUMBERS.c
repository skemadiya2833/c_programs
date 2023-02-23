#include<stdio.h>
int main()
{
    int size ;
    printf("Enter The Size of Array :  ");
    scanf("%d",&size);
    int arr[size] , i , j , k , l = 0;
    printf("Enter %d elements of Array :\n",size);
    for(i = 0 ; i < size ; i++ )
    {
        scanf("%d",&arr[i]);
    }
    for(i = 0 ; i < size ; i++)
    {
        for(j = i ; j < size ; j++)
        {
            if(i != j )
            {
                if(arr[i] == arr[j])
                {
                    for( k = j ; k < size - 1 ; k++)
                    {
                        arr[k] = arr[k+1] ;
                        arr[k+1] = 0 ;
                        arr[size-l] = 0 ;
                    }
                    l++ ;
                }
            }
        }
    }
    for(i = 0 ; i < size ; i++ )
    {
        printf("%d ",arr[i]);
    }

    return 0 ;
}
