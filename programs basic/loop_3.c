//series 1 + 4 + 9 + 16 + 25 + 36 + …n
#include <stdio.h>

int main()
{
    int n,i=0,sum=0;
    printf("Enter number of terms :");
    scanf("%d",&n);

    while (i<=n)
    {
        sum+=(i*i);
        i++;
    }
    printf("sum of square of %d numbers :%d",n ,sum);
    
    return 0;
}