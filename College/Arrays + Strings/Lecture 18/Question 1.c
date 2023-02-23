#include<stdio.h>
#include<string.h>
int main()
{
    char str[50] ;
    int flag = 1 ;
    printf("Enter The String :");
    gets(str);
    char str1[50] ;
    strcpy(str1,str);
    strrev(str);
    for(int i = 0 ; i < strlen(str) ; i++)
    {
        if(str[i] != str1[i])
        {
            flag = 0 ;
            break ;
        }
    }
    if(flag == 1 )
    {
        printf("Given string is A Palindrome.");
    }
    else
    {
        printf("Given string is not A Palindrome.");
    }
    return 0 ;
}
