#include<stdio.h>
int productofdigits(int num);
int main()
{
    int num ;
    printf("Enter the number :");
    scanf("%d",&num);
    printf("Product of all digits of %d is %d",num,productofdigits(num));
    return 0 ;
}
int productofdigits(int num)
{
    int product = 1 , var ;
    while(num>1)
    {   var = num % 10 ;
        product = product * var ;
        num = num / 10 ;
    }
    return product ;
}
