#include<stdio.h>
#include<string.h>
int main()
{
    char str[100] ;
    int i ,words = 1 , characters = 0 ;
    printf("Enter the String :\n");
    gets(str);
    char *ptr = str ;
    for(i = 0 ; *(ptr+i) != '\0' ; i++)
    {
        if(*(ptr+i) == ' ')
        {
            words++ ;
        }
        if(*(ptr+i) != ' '&& *(ptr+i) != '\t' && *(ptr+i) != '\n')
        {
            characters++ ;
        }
    }
    printf("Number of Words in given string is %d\nAnd Characters is %d",words,characters);
    return 0 ;
}
