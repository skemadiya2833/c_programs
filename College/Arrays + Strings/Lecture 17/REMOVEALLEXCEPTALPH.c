#include<stdio.h>
int main()
{
    char str[100] ;
    printf("Enter the String :");
    gets(str);
    int i, j ;
    for( i = 0 ; str[i] != '\0' ; i++)
    {
     while(!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z') && !(str[i] == '\0') && str[i] != ' ')
     {
         for( j = i ; str[j] != '\0' ; j++ )
         {
             str[j] = str[j+1] ;
         }
         str[j] = '\0' ;
     }
    }
    printf("String After Removing All Elements except alphabets is\n");
    puts(str);
    return 0 ;
}
