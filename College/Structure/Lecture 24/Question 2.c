#include<stdio.h>
struct student
{
    char name[20];
    int rollno ;
    float marks ;
};
int main()
{
    int i ;
    int n ;
    printf("Enter the number of Students :");
    scanf("%d",&n);
    struct student s[n] ;
    printf("Enter Student name , roll number , marks:\n");
    for(i= 0; i < n ;i++ )
    {
        printf("Student : %d : ",i+1);
        scanf("%s %d %f",&s[i].name,&s[i].rollno,&s[i].marks);
    }
    for(i= 0 ; i < n ;i++ )
    {
        printf("%s %d %f\n",s[i].name,s[i].rollno,s[i].marks);
    }
    return 0 ;
}
