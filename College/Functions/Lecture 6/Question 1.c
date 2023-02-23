#include<stdio.h>
int swapdigits(int num);
int main()
{
    int num ;
    printf("Enter The number : ");
    scanf("%d",&num);
    printf("After Swapping First and Last digits : %d",swapdigits(num));
    return 0 ;
}
int swapdigits(int num)
{
    int swapped , original = num, first , last;
    first = num % 10 ;
    while(num > 10)
    {
        num = num / 10 ;
    }
    last = num ;
    swapped = original - first + last ;
    num = original ;
    while(num > 10)
    {
        first = first * 10 ;
        last = last * 10 ;
        num = num / 10 ;
    }
    swapped = swapped - last + first ;
    return swapped ;
}
