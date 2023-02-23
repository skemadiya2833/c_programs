#include<stdio.h>
int main()
{
    int a[50] , size , sum = 0;
    printf("Enter the size of array :");
    scanf("%d",&size);
    printf("Enter the elements of array :\n");
    for(int i = 0 ; i < size ; i++ )
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    for(int i = 0 ; i < size ; i++ )
    {
        sum = sum + a[i] ;
    }
    printf("The Avg of all elements of array is %d",sum);
    return 0 ;
}
