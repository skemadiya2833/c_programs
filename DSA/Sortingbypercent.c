#include<stdio.h>
#include<string.h>
struct student
{
    char name[25];
    int rollNo ;
    float Perc ;
};
int main()
{
    int i , j ,size;
    printf("Enter the number of Students : ");
    scanf("%d",&size);
    struct student s[size];
    struct student temp ;
    for(i =0 ; i < size ; i++)
    {
        printf("ENTER %d Student Details\nName : ",i+1);
        fflush(stdin);
        gets(s[i].name);
        printf("Roll Number : ");
        scanf("%d",&s[i].rollNo);
        printf("Percent : ");
        scanf("%f",&s[i].Perc);
    }
    for(i =0 ; i < size ; i++)
    {
        for(j = 0 ; j < size ; j++)
        {
            if(s[j].Perc < s[j+1].Perc )
            {
                temp = s[j] ;
                s[j] = s[j+1] ;
                s[j+1] = temp ;
            }
        }
    }
    printf("\n\n\tThe Sorted List of Students is :\n\n");
    for(i =0 ; i < size ; i++)
    {
        printf("\Name : \n",i+1);
        puts(s[i].name);
        printf("Roll Number : %d\nPercent : %.2f\n\n",s[i].rollNo,s[i].Perc);
    }
    return 0 ;
}
