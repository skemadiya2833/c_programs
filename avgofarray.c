#include<stdio.h>
int main()
{
    int  size ;
    float avg , a[50] , sum = 0.0 ;
    printf("Enter the size of array :");
    scanf("%d",&size);
    printf("Enter the elements of array :\n");
    for(int i = 0 ; i < size ; i++ )
    {
        printf("a[%d] = ",i);
        scanf("%f",&a[i]);
    }
    for(int i = 0 ; i < size ; i++ )
    {
        sum = sum + a[i] ;
    }
    avg = sum / size ;
    printf("The Avg of all elements of array is %.3f",avg);
    return 0 ;
}
