#include<stdio.h>
#include<string.h>
int main()
{
    char str[50] ;
    printf("Enter the String :");
    gets(str);
    for(int i = 0 ; str[i] != '\0' ; i++ )
    {
        for(int j = i + 1 ; str[j] != '\0' ; j++ )
        {
            if(str[i] == str[j] )
            {
                for(int k = j ; str[k] != '\0' ; k++ )
                {
                    str[k] = str[k+1] ;
                }
            }
        }
    }
    puts(str);
    return 0 ;
}
