#include<stdio.h>
int max(int a , int b);
struct Employee
{
    char name;
    int id ;
    float salary ;
}e1,e2;

int main()
{
    printf("ENTER FIRST EMPLOYEE Details\n");
    scanf(" %c %d %f",&e1.name,&e1.id,&e1.salary);

    printf("ENTER SECOND EMPLOYEE Details\n");
    scanf(" %c %d %f",&e2.name,&e2.id,&e2.salary);

    printf("FIRST EMPLOYEE Details\nname :\n%c\nID :%d\nSalary :%f \n",e1.name,e1.id,e1.salary);
    printf("SECOND EMPLOYEE Details\nname :\n%c\nID :%d\nSalary :%f \n",e2.name,e2.id,e2.salary);

    printf("\n\nMAXIMUM SALARY IS %d",max(e1.salary,e2.salary));

    return 0 ;
}
int max(int a, int b)
{
    int maximum = a ;
    if(maximum < b)
    {
        maximum = b ;
    }
    return maximum ;
}
