/*#include<stdio.h>
void swap(int num1 , int num2 );
int main()
{
    int num1 , num2 ;
    printf("Enter the number 1 : ");
    scanf("%d",&num1);
    printf("Enter the number 2 : ");
    scanf("%d",&num2);
    printf("\n\nIn Main Function : num1 = %d , num2 = %d",num1,num2);
    swap(num1,num2);
    printf("\n\nIn Main Function : num1 = %d , num2 = %d\n",num1,num2);

 return 0;
}

void swap(int num1 , int num2 )
{
    int temp = num1 ;
        num1 = num2 ;
        num2 = temp ;

    printf("\n\nIn SWAP Function : num1 = %d , num2 = %d",num1,num2);
}
 9926723067 */

#include<stdio.h>
int fact(int num);
int main()
{
     int num ;
     printf("Enter the number :");
     scanf("%d",&num);
     printf("The factorial of %d is %d",num,fact(num));
     return 0 ;
}
int fact(int num)
{
    if(num>1)
    {
        num = num * ( num - 1 );
        return fact(num-1) ;
    }
    else
    {
        return num ;
    }
}

