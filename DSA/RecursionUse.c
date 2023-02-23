#include<stdio.h>
/*int func(int x, int y); // #1
int main()
{   int x , y ;
    printf("Enter values of X and Y : ");
    scanf("%d %d",&x,&y);
    printf(" Ans = %d",func(x,y));
    return 0 ;
}
int func(int x, int y)
{
	if (x == 0)
		return y;
	else
		return func(x - 1, x + y);
}
*/
// minimum index finder
/*
int minIndex(int arr[], int s, int e)
{
	int sml = ;  // ??
	int mindex;
	for (int i = s; i < e; i++) {
		if (sml > arr[i]) {
			sml = arr[i];
			mindex = i;
		}
	}
	return mindex;
}

void fun2(int arr[], int start_index, int end_index)
{
	if (start_index >= end_index)
		return;
	int min_index;
	int temp;

	// minIndex() returns index of minimum value in
	// array arr[start_index...end_index]
	min_index = minIndex(arr, start_index, end_index);

	temp = arr[start_index];
	arr[start_index] = arr[min_index];
	arr[min_index] = temp;

	fun2(arr, start_index + 1, end_index);
}
int main()
{
    int arr[5] , s , e ;
    for(int i = 0 ; i <= 5 ; i++)
    {
        scanf("%d",&arr[i]);
    }
    s = 0 ;
    e = 10 ;
    for(int i = 0 ; i <= 5 ; i++)
    {
        printf("%d ",arr[i]);
    }
   fun2(arr,s,e);
     for(int i = 0 ; i <= 5 ; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0 ;
}
*/
void display(int n);
int main()
{
    int n ;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    display(n) ;
    return 0 ;
}
void display(int n)
{
    if(n==0)
    {
        return ;
    }
    else
    {
        //printf("\nValue of n = %d",n);
        display(n-1);
        printf("\nValue of n = %d",n);
        return ;
    }
}
