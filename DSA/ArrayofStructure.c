#include<stdio.h>
#include<string.h>
struct Employee
{
    char name[25];
    int id ;
    float salary ;
};
int main()
{
    int i , size;
    printf("Enter the number of Employees : ");
    scanf("%d",&size);
    struct Employee Emp[size];
    for(i =0 ; i < size ; i++)
    {
        printf("ENTER %d EMPLOYEE Details\n",i+1);
        fflush(stdin);
        gets(Emp[i].name);
        scanf("%d %f",&Emp[i].id,&Emp[i].salary);
    }
    for(i =0 ; i < size ; i++)
    {
        printf("\nTHE %d EMPLOYEE Details\n",i+1);
        puts(Emp[i].name);
        printf("ID : %d Salary : %.2f\n",Emp[i].id,Emp[i].salary);
    }
    return 0 ;
}
