#include<stdio.h>
int main()
{
    char str[50] ;
    int count = 0 , i;
    printf("Enter the string :");
    gets(str);
    for(i = 0 ; str[i] != '\0' ; i++)
    {
        count++ ;
    }
    printf("Number of digits in given string(%s) is %d",str,count);
    return 0;
}
