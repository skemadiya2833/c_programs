#include<stdio.h>
#include<string.h>
int lengthofstring( char str[] );
int main()
{
    char str[50] ;
    printf("Enter the string :");
    gets(str);
    printf("length of given string is %d",lengthofstring(str));
    return 0 ;
}
int lengthofstring( char str[] )
{
    int length = 0 ;
    for(int i = 0 ; str[i] != '\0' ; i++)
    {
        length ++ ;
    }
    return length ;
}
