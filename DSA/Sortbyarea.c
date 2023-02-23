#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    for(int i = 0 ; i < n ; i++)
    {
        for(int j =i ; j < n; j++)
        {
            double k = arr(tr,i);
            double l = arr(tr,j);
            if(k>l)
            {
                struct triangle temp ;
                temp = tr[i] ;
                tr[i] = tr[j] ;
                tr[j] = temp ;
            }
        }
    }
}
int arr(struct triangle* tr , int i)
{
    int p = (tr[i].a + tr[i].b + tr[i].c) / 2 ;
    double s ;
    int x = p * (p-tr[i].a) * (p - tr[i].b) * (p- tr[i].c) ;
    s = sqrt(x);
    return s ;
}
int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
