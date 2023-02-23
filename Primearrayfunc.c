#include<stdio.h>
int primecheck(int num);
void printarray(int arr[], int size);
int main()
{
    int i , size ;
    printf("Enter the size of array :");
    scanf("%d",&size);
    int input_array[size] , array_of_prime[size] ;
    printf("Enter the elements of array :\n");
    for(i = 0 ; i < size ; i++)
    {
        scanf("%d",&arr[i]);
    }
    int flag , num , address = 0 ;
    for( i = 0 ; i < size ; i++ )
    {
        flag = primecheck(arr[i]);
        if( flag == 1 )
        {
            arrprime[address] = arr[i] ;
            address++ ;
        }
    }
    printf("The first array is :\n");
    printarray(arr,size);
    printf("Array of prime numbers is :\n");
    printarray(arrprime,address);
    return 0 ;
}

int primecheck(int num)
{
    for(int j = 2 ; j <= num/2 ; j++)
    {
        if(num == 0 || num == 1)
        {
            return 0 ;
            break ;
        }
        if(num%j == 0 )
        {
          return 0 ;
          break ;
        }
    }
    return 1 ;
}

void printarray(int arr[] , int size)
{
    for(int k = 0 ; k < size ; k++)
    {
        printf("array[%d] = %d\n",k,arr[k]);
    }
}






