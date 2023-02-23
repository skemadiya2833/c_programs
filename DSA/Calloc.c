#include<stdlib.h>
#include<stdio.h>
void main()
{
    int *ptr, size ,i  ;
    printf("\nEnter Size :");
    scanf("%d",&size);
    ptr = (int *)calloc(size , sizeof(int));
    if(ptr == NULL)
    {
        printf("\n Memory allocation Failure");
    }
    else
    {
       /* for(i = 0 ; i < size ; i++)
        {
            printf("\n Enter Next element :");
            scanf("%d",(ptr+i));
        }
        */
        for(i = 0 ; i < size ; i++)
        {
            printf("\n %d",*(ptr+i));
        }
        free(ptr);
        ptr = NULL ;
    }
}
