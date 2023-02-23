#include<stdio.h>
int main()
{
    int num ;
    printf("Enter the number : ");
    scanf("%d",&num);

    int originalnum = num , rem , result = 0 ;
    while(num>0)
    {
        rem = num % 10 ;
        printf("%d + ( %d * %d * %d)\n",result,rem,rem,rem);
        result = result + ( rem * rem * rem );
        num = num / 10 ;
    }
    if(result == originalnum)
    {
        printf("As %d = %d, Therefore\n",result,originalnum);
        printf("The number is an Armstrong Number");
    }
    else
    {   printf("since %d != %d,\n",result,originalnum);
        printf("The number is not an Armstrong Number.");
    }
    return 0 ;
}
