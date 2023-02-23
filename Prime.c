#include<stdio.h>
#include<math.h>

void main()
{
    int num , count = 0 , i , x , y ;
    float root2 , root3 ;
    printf("Enter The number :");
    scanf("%d",&num);
    for(i = 2 ; i < num ; i++)
    {
        if( num % i == 0 )
        {
            count++;
        }
    }
    if (count != 0 )
    {
        printf("The number is not prime.\n");
        root2 = sqrt(num);
        x = ceil(root2);
        if(x == root2 )
        {
            printf("%d is Square of %d",num , x);
        }
        else
        {
            root3 = cbrt(num);
            y = ceil(root3);
            if( y == root3 )
            {
                printf("%d is Cube of %d", num , y );
            }
            else
            {
                printf("%d is not a perfect square or cube of any whole number.",num);
            }
        }
    }
    else
    {
        printf("The number is Prime.");
    }
}
