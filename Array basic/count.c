//count the numbers of +ve -ve in a array 
#include <stdio.h>
int main()
{
    int n,i,j,a[100];
    int positive=0,negative=0;

    printf("Enter the size of array:");
    scanf("%d",&n);

    for (i=0 ; i<n ; i++)
    {
        printf("Enter a[%d]",i);    //for inputting array 
        scanf("%d",&a[i]);

        if(a[i]>0)                  //to check (can be done in different loop also)
        {
            positive ++;
        }
        else negative ++;
    }

    printf("Positive number count is %d", positive);
    printf("\n Negative number count is %d", negative);

    return 0;
}