// Find min max sum and avg of array elements
#include <stdio.h>
int main()
{
    int n,i,a[100];
    int max,min,sum=0;
    float average;

    printf("Enter the size of array:");
    scanf("%d",&n);

    for (i=0 ; i<n ; i++)
    {
        printf("Enter a[%d]:",i);    //for inputting array 
        scanf("%d",&a[i]);
    }
    for(i=0 ; i<n ; i++)
    {
        sum = sum +a[i];
    }
    average = sum/n ;

    min=max=a[0];
    for(i=1; i<n; i++)
    {
        if(min>a[i])
		    min=a[i];   
		if(max<a[i])
		    max=a[i];       
    }

    printf("The sum of elements of array :%d \n",sum);
    printf("Average of the elements of array :%f\n",average);
    printf("Maximum :%d\n",max);
    printf("Minimum :%d",min);

    return 0;
}