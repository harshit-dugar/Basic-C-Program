// 1+1/2+1/3+1/4+1/5+.....n
#include <stdio.h>

int main()
{
    int n;
    float i,sum=0.0;
    printf("Enter n:");
    scanf("%d",&n);

    for ( i = 1; i <=n; i++)
    {
        sum+=(1/i);
    }
    printf("sum is:%f",sum);

    return 0;
}