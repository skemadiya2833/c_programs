#include<stdio.h>
int swap(int *x , int *y);

int main()
{
    int x , y ;
    printf("Enter The Value For X = ");
    scanf("%d",&x);
    printf("Enter the value For Y = ");
    scanf("%d",&y);

    printf("The values are X = %d and Y = %d\n",x,y);

    swap(&x,&y);

    printf("In Main Function X = %d and Y = %d\n",x,y);

    printf("Again Swapping.......\n");
    swap(&x,&y);

    printf("In Main Function X = %d and Y = %d",x,y);
    return 0 ;
}

int swap(int *x ,int *y)
{
    int temp = *x ;
        *x = *y ;
        *y = temp ;

    printf("In Swap Function X = %d and Y = %d\n",*x,*y);
    return 0 ;
}
