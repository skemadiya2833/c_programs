#include<stdio.h>
int main()
{
    char str[100];
    int vow = 0 ;
    int con = 0 ;
    int dig = 0 ;
    int space = 0 ;
    printf("Enter th string :");
    gets(str);
    for(int i = 0 ; str[i] != '\0' ; i++)
    {
        str[i] = tolower(str[i]);
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vow++ ;
        }
        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            con++ ;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            dig++ ;
        }
        else if(str[i] == ' ')
        {
            space++ ;
        }
    }
    printf("Vowels = %d\nConsonants = %d\nDigits = %d\nSpace = %d",vow,con,dig,space);
    return 0 ;
}
