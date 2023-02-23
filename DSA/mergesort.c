#include<stdio.h>
void main()
{
    int a[] = {6,5,4,3,2,1};
    int l = 0;
    int u = 6 ;
    printf("Array after sorting\n");
    merge_sort(a,l,u);
    for(int i =0 ; i < 6 ;i++ )
    {
      printf("%d\t",a[i]);
    }
}
void merge_sort(int a[],int l, int u)
{
    if(l<u)
    {
        int mid = (l+u)/2 ;
        merge_sort(a,l,mid);
        merge_sort(a,mid+1,u);

        merge(a,l,mid,u);
    }
}
void merge(int a[],int l,int mid,int u)
{
    int i = l , j = mid +1 , k = l;
    int b[20];
    while(i <= mid && j <= u)
    {
        if(a[i] < a[j])
        {
            b[k] = a[i];
            i++;
            k++;
        }
        else
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    for( int p = i ; p <= mid ; p++)
    {
        b[k] = a[p] ;
        k++;
    }
    for(int p = j ; p <= u ;p++ )
    {
        b[k] = a[p] ;
        k++;
    }
    for(i = l ; i <= u ;i++)
    {
        a[i] = b[i];
    }
}
