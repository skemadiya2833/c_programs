#include<stdio.h>
void reverse(int num);
int main()
{
    int num ;
    printf("Enter the number :");
    scanf("%d",&num);
    printf("The reverse Number is : ");
    reverse(num);
    return 0 ;
}
void reverse(int num)
{
    if(num <= 10)
    {
        printf("%d",num);
        return ;
    }
    else
    {
        printf("%d",num%10);
        reverse(num/10);
    }
}


