#include <stdio.h>
#include<string.h>
int main()
{
    int t , n , x , y ,i, j , flag ;
    char str[50];
    char start[20] = {"START38"};
    scanf("%d",&t);
    for(i = 0 ; i < t ; i++)
    {
        x = 0 ;
        y = 0 ;
        scanf("%d",&n);
        for(j = 1 ; j <= n ; j++)
        {
            scanf("%s",&str);
            flag = strcmp(str,start);
            if(flag == 0)
            {
                x++ ;
            }
            else
            {
                y++ ;
            }
        }
        printf("%d %d\n",x,y);
    }
  return 0 ;
}
