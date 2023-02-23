#include<stdio.h>
int powerofnum(int num, int pow);
int main()
{
    int num , pow ;
    printf("Enter the number :");
    scanf("%d",&num);
    printf("Enter the power :");
    scanf("%d",&pow);
    printf("%d^%d = %d",num,pow,powerofnum(num,pow));
    return 0 ;
}
int powerofnum(int num, int pow)
{
    int ans = 1 ;
    for(int i = 1 ; i <= pow ; i++)
    {
        ans = ans * num ;
    }
    return ans ;
}
