#include<stdio.h>
int main()
{
    char str[50] ;
    printf("Enter the string :");
    gets(str);
    int count = 1 , i ;
    for( i = 0 ; str[i] != '\0' ; i++)
    {
        if(str[i] == ' '|| str[i] == '\n' || str[i] == '\t')
        {
            count++ ;
        }
    }
    printf("Total number of words in given string is : %d",count);
    return 0 ;
}
