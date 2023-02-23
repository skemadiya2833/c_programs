#include<stdio.h>
struct student
{
    char name [20] ;
    int rollno ;
    float marks ;
};

int main()
{
    struct student s1 = {"Sunil",100,100};
    struct student s2 ;
    s2 = s1 ;
    printf("Student 1 : %s %d %.2f\n",s1.name,s1.rollno,s1.marks);
    printf("Student 2 : %s %d %.2f\n",s2.name,s2.rollno,s2.marks);
    return 0 ;
}
