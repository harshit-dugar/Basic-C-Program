//to count even and odd numbers in array 
#include <stdio.h>
int main()
{
    int n,i,j,a[100];
    int even=0,odd=0;

    printf("Enter the size of array:");
    scanf("%d",&n);

    for (i=0 ; i<n ; i++)
    {
        printf("Enter a[%d]",i);
        scanf("%d",&a[i]);

        if(a[i] % 2 == 0)
        {
            even++;
        }
        else odd++;
    }

    printf("Even count in array is %d \n",even);
    printf("Odd count in an array id :%d",odd);

    return 0;
}