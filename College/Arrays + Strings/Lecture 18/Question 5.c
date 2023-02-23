#include<stdio.h>
#include<string.h>
int main()
{
    char str[50]  ;
    printf("Enter The String :");
    gets(str);
    int length = strlen(str);
    for(int i = 0 ; i < length ; i++)
    {
        if(str[i] == ' ')
        {
            for(int j = i ; j < length ; j++ )
            {
                str[j] = str[j+1];
            }
            length-- ;
            i-- ;
        }
    }

    puts(str);
    return 0 ;
}
