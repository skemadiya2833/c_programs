#include<stdio.h>
int main()
{
    int num , ans = 0;
    printf("Enter the number :");
    scanf("%d",&num);
    for(int i = 1 ; i < num ; i++ )
    {
        if(num%i == 0)
        {
            ans = ans + i ;
        }
    }

    printf("The sum of all proper divisions of %d is %d",num,ans);

    return 0 ;
}
