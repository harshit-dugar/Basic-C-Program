//print even numbers using for loop
#include<stdio.h>
int main()
{
    int i, number;
    printf("Please Enter the Maximum Limit Value : ");
    scanf("%d", &number);
    printf("Even Numbers between 1 and %d are : \n", number);
    for(i = 1; i <= number; i++)
    {
        if ( i % 2 == 0 )
        {
            printf(" %d\t", i);
        }
    }
    return 0;
}