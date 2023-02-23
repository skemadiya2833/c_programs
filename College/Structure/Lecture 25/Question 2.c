#include<stdio.h>
#include<string.h>
struct Details
{
    char stud_name[20] ;
    char address[20] ;
};
int main()
{
    int n , i , j ;
    printf("Enter the number of students :");
    scanf("%d",&n);
    struct Details s[n] ;
    char temp[n] ;
    for( i= 0; i < n ;i++ )
    {
        printf("Student : %d : ",i+1);
        scanf("%s %s",&s[i].stud_name,&s[i].address);
    }
    for( i = 0 ; i < n ; i++)
    {
        for( j = i + 1 ; j < n ; j++ )
        {
            if(strcmp(s[i].stud_name , s[j]) > 0)
            {
                strcpy(temp,s[i].stud_name);
                strcpy(s[i].stud_name, s[j].stud_name);
                strcpy(s[j].stud_name,temp);
            }
        }
    }
    for( int i= 0; i < n ;i++ )
    {
        printf("Student Name : %s Address : %s",s[i].stud_name,s[i].address);
    }
    return 0 ;
}
