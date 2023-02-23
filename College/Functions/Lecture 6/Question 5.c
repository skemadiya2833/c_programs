#include<stdio.h>
#include<stdbool.h>
bool perfectnumber(int num);
int main()
{
    int num ;
    printf("Enter The number : ");
    scanf("%d",&num);
    if(perfectnumber(num) == 1 )
    {
        printf("%d is a Perfect number",num);
    }
    else
    {
        printf("%d is not a perfect number",num);
    }
    return 0 ;
}
bool perfectnumber(int num)
{
    int sum = 0 ;
    for(int i = 1 ; i <= num / 2 ;  i++ )
    {
        if( num%i == 0 )
        {
            sum = sum + i ;
        }
    }
    if(sum == num )
    {
        return 1 ;
    }
    else
    {
        return 0 ;
    }
}
