#include<stdio.h>
struct Employee
{
    char name;
    int id ;
    float salary ;
}e1,e2;

int main()
{
    printf("ENTER FIRST EMPLOYEE Details\n");
    printf("Name (One character only) : ");
    scanf(" %c",&e1.name);
    printf("ID : ");
    scanf(" %c",&e1.id);
    printf("Salary : ");
    scanf("%f",&e1.salary);

    printf("ENTER SECOND EMPLOYEE Details\n");
    printf("Name (One character only) : ");
    scanf(" %c",&e2.name);
    printf("ID : ");
    scanf(" %c",&e2.id);
    printf("Salary : ");
    scanf("%f",&e2.salary);

    printf("FIRST EMPLOYEE Details\nname : %c\nID :%d\nSalary :%f \n",e1.name,e1.id,e1.salary);
    printf("SECOND EMPLOYEE Details\nname : %c\nID :%d\nSalary :%f \n",e2.name,e2.id,e2.salary);

    return 0 ;
}
