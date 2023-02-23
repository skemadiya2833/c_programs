#include<stdio.h>
int main()
{
    int arr[5] , i , len ;
    len = sizeof(arr) / sizeof(arr[0]);
    printf("\nlEN : %d",len);
    printf("Size : %d",sizeof(arr));
    for(i = 0 ; i <= 7 ; i++)
    {
        arr[i] = i;
    }
    float k = 100.90 ;
    arr[9] = 'a';
    for(i = 0 ; i <= 20; i++)
    {
        printf("\narr[%d] = %d",i,arr[i]);
    }
    printf("\nSize : %d",sizeof(arr));
    printf("\nlen : %d",len);
    printf("arr[7] = %d",arr[7]);
    printf("K= %.3f",k);
    return 0 ;
}
