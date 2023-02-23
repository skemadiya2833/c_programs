#include<stdio.h>
#include<stdbool.h>
bool primechecker(num);
int main()
{
    int num ;
    printf("Enter The Number :");
    scanf("%d",&num);
    if(primechecker(num) == 1 )
    {
        printf("%d is a Prime number",num);
    }
    else
    {
        printf("%d is not a Prime number",num);
    }
    return 0 ;
}
bool primechecker(int num)
{
    int check = 0 ;
    if(num == 0 || num == 1 )
    {
        return 0 ;
    }
    else
    {
        for(int i = 2 ; i <= num/2 ; i++ )
        {
        if(num%i == 0 )
        {
            check++ ;
            break ;
        }
        }
    }
    if(check == 0 )
    {
        return 1 ;
    }
    else
    {
        return 0 ;
    }
}
