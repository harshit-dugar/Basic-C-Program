#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,j;
    int ar[10][10],sum1=0,sum2=0,sum;
    scanf("%d",&n);

    for(i=0 ; i<n ; i++)
    {
        for (j=0 ; j<n ; j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    for(i=0 ; i<n ; i++)
    {
        for (j=0 ; j<n ; j++)
        {
            if(i==j)
            {
                sum1 = sum1 +ar[i][i];
            }
            if(i+j==n-1)
            {
                sum2 = sum2 + ar[i][j];
            }
        }
    }
    sum = sum1-sum2;
    sum = sum *(-1);
    
    printf("%d",sum);

    return 0;
}