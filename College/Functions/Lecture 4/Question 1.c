#include<stdio.h>
int numberofdigits(int num);

int main()
{
    int num ;

    printf("Enter the number :");
    scanf("%d",&num);

    printf("The Number of digits in %d is %d",num,numberofdigits(num));

    return 0 ;
}

int numberofdigits(int num)
{
    int digits = 0 ;
    while(num>0)
    {
        digits++ ;
        num = num/10 ;
    }
    return digits ;
}
