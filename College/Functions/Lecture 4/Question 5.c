#include<stdio.h>
int reverseofnumber(int num);
int main()
{
    int num ;
    printf("Enter the number :");
    scanf("%d",&num);
    printf("Reverse of %d is %d",num,reverseofnumber(num));
    return 0 ;
}
int reverseofnumber(int num)
{
    int rev = 0, rem ;
    while(num>0)
    {
        rem = num % 10 ;
        num = num / 10 ;
        rev =  ( rev * 10 ) + rem ;
    }
    return rev ;
}
