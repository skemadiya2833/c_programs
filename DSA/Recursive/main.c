#include <stdio.h>
#include <stdlib.h>
/*void display(int n);
*/
int main()
{
    int n ;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    /* Assume that n is greater than or equal to 1 */
    printf("%d",fun1(n));
//    display(n) ;
    return 0 ;
}
 int fun1(int n)
    {
        if (n == 1)
            return 0;
        else
            return 1 + fun1(n / 2);
    }
/*void display(int n)
{
    if(n==0)
    {
        return ;
    }
    else
    {
        printf("\nValue of n = %d",n);
        display(n-1);
//        printf("\nValue of n = %d",n);
        return ;
    }
}
*/
