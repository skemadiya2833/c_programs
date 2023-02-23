#include<stdio.h>
#include<stdbool.h>
bool palindrome_check(int num);
int main()
{
    int num , flag ;
    printf("Enter the number :");
    scanf("%d",&num);
    flag = palindrome_check(num) ;
    if(flag == 1 )
    {
        printf("The number is palindrome number.");
    }
    else
    {
        printf("The number is not palindrome number.");
    }
    return 0 ;
}
bool palindrome_check(int num)
{
    int rem , rev = 0 , realnum = num ;
    while(num > 0)
    {   rem = num % 10 ;
        rev = ( rev * 10 ) + rem ;
        num /= 10 ;
    }
    if(realnum == rev)
    {
        return 1 ;
    }
    else
    {
        return 0 ;
    }
}
