//sort the arrsy in ascending order 
#include <stdio.h>

int main()
{
    int a[100];
    int n,i,j,min;
    printf("Input the size of array : ");
    scanf("%d", &n);
    printf("Input %d elements in the array :\n",n);
    for(i=0;i<n;i++)
    {
	    printf("element - %d : ",i);
	    scanf("%d",&a[i]);
	}

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[j] <a[i])
            {
                min = a[i];
                a[i] = a[j];
                a[j] = min;
            }
        }
    }
    printf("\nElements of array in sorted ascending order:\n");
    for(i=0; i<n; i++)
    {
        printf("%d  ", a[i]);
    }
	printf("\n\n");

    return 0;
}