// Count the number of eleents higher then avg
#include <stdio.h>
int main()
{
    int n,i,c,a[100];
    int sum=0;
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
    printf("Average is :%f\n",average);
    printf("Elements greater then average are :");
    c=0;
    for (i=0 ; i<n ; i++)
    {
        if(a[i]>average)
        {
            printf("%d \t",a[i]);
            c++;
        }
    }
    printf("\nTotal numbrer of elemwnts greater then average are :%d\n",c);

    return 0;
}