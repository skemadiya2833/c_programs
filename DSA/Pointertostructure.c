#include<stdio.h>
#include<string.h>
struct Shop
{
    char p_name[10] ;
    int p_id ;
    float price ;
};
int main()
{
    struct Shop S ;
    struct Shop *s;
    printf("Enter the Product details :\nProduct name :");
    scanf("%s",&S.p_name);
    printf("Product id :");
    scanf("%d",&S.p_id);
    printf("Price :");
    scanf("%f",&S.price);
    s = &S ;
    printf("Product Details are :\nProduct name : %s\nProduct Id : %d\nPrice : %.2f",s->p_name,s->p_id,s->price);
    return 0 ;
}
