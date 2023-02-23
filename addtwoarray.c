#include<stdio.h>
int main()
{
    int a[50] , size ,b[50] ,c[50];
    printf("Enter the size of array :");
    scanf("%d",&size);
    printf("Enter the elements of first array :\n");
    for(int i = 0 ; i < size ; i++ )
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of second array :\n");
    for(int i = 0 ; i < size ; i++ )
    {
        printf("b[%d] = ",i);
        scanf("%d",&b[i]);
    }

    printf("The sum of a and b array is :\n");
    for(int i = 0 ; i < size ; i++ )
    {
        c[i] = a[i] + b[i] ;
        printf("c[%d] = %d\n",i,c[i]);
    }
    return 0 ;
}

