#include <stdio.h>
#include <string.h>

int main()
{
   char str[50] ;
   printf("Enter the string :");
   gets(str);
   for(int i = 0 ; i < strlen(str) ; i++)
   {
       if(str[i] == ' ')
       {
           for(int j = i ; j < strlen(str) ; j++)
           {
               str[j] = str[j+1] ;
           }
       }
   }
   puts(str);
    return 0;
}
