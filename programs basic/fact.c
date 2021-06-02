#include <stdio.h>

int main()
{
    int n,fact=1,i;
    printf("Enter n:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        fact = fact*i;
        i++;
    }
    printf("%d Factorial is :%d \n",n ,fact);

    return 0;
}