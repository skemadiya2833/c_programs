#include<stdio.h>
int main()
{
    char str[50] ;
    printf("Enter the string :");
    gets(str);
    printf("Given String after separating individuals :\n");
    for(int i = 0 ; str[i] != '\0' ; i++ )
    {
        printf("%c ",str[i]);
    }
    return 0 ;
}
