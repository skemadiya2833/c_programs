#include<stdio.h>
struct FeetInch
{
    int feet ;
    int inch ;
};

void add(struct FeetInch f1,struct FeetInch f2,struct FeetInch *p );

int main()
{
    struct FeetInch f1,f2;
    struct FeetInch p ;
    printf("ENTER FIRST DISTANCE\n");
    printf("Feet : ");
    scanf("%d",&f1.feet);
    printf("Inch : ");
    scanf("%d",&f1.inch);
    printf("ENTER SECOND DISTANCE\n");
    printf("Feet : ");
    scanf("%d",&f2.feet);
    printf("Inch : ");
    scanf("%d",&f2.inch);
    add(f1,f2,&p);
    printf("The Addition is :\nFeet : %d\nInch : %d",p.feet,p.inch);
    return 0 ;
}

void add(struct FeetInch f1,struct FeetInch f2,struct FeetInch *p )
{
    p->feet = f1.feet + f2.feet ;
    p->inch = f1.inch + f2.inch ;

    while((p->inch) >= 12)
    {
        (p->feet) = (p->feet) + 1 ;
        (p->inch) = (p->inch) - 12 ;
    }
}
