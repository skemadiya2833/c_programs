#include<stdio.h>
int main()
{
    char str[50] ;
    printf("Enter the string :");
    gets(str);
    int i , count = 0;
    for(i = 0 ; str[i] != '\0' ; i++ )
    {
        count++ ;
    }
    printf("The Reversed String is :\n");
    for( i = count - 1 ; i >= 0 ; i-- )
    {
        printf("%c ",str[i]);
    }
    return 0 ;
}
