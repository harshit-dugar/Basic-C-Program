// 1-2+3-4+5-6+7..n
#include <stdio.h>

int main()
{
    int n,i,sum=0;
    prinf("Enter n:");
    scanf("%d",&n);

    i=1;
    while (i<=n)
    {
        if(i%2!=0)
            sum+=i;
        else
            sum-=i;
        i++;    
    }
    printf("sum of series is :%d\t",sum);

    return 0;    
}