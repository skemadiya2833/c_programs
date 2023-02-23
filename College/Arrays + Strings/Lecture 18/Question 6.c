#include<stdio.h>
int main()
{
    int sum = 0 , row , col , i , j ;
    printf("Enter the number of rows :");
    scanf("%d",&row);
    printf("Enter the number of columns :");
    scanf("%d",&col);
    printf("Enter The Elements of array :\n");
    int arr[row][col] ;
    for(i = 0 ; i < row ; i++)
    {
        for(j = 0 ; j < col ; j++)
        {
            printf("arr[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Given Matrix is :\n");
    for(i = 0 ; i < row ; i++ )
    {
        for(j = 0 ; j < col ; j++)
        {
            printf(" %d  ",arr[i][j]);
            if(i == j )
            {
                sum = sum + arr[i][j] ;
            }
        }
        printf("\n");
    }
    printf("The Sum of all diagonals of given matrix is %d",sum);
    return 0 ;
}
