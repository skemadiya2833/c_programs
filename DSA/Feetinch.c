#include<stdio.h>
struct FeetInch
{
    int feet ;
    int inch ;
}f1,f2,f3 ;
int main()
{
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

    f3.feet = f1.feet + f2.feet ;
    f3.inch = f1.inch + f2.inch ;

    while(f3.inch >= 12)
    {
        f3.feet++ ;
        f3.inch -= 12 ;
    }

    printf("The Addition is :\nFeet : %d\nInch : %d",f3.feet,f3.inch);
    return 0 ;
}
