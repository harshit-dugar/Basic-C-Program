// print sum of n numbers 
#include <stdio.h>

int main()
{
   int num, i, sum = 0; 
    printf("Enter a positive number : ");  
    scanf("%d", &num); 
     
    i = 0;  
    while (i <= num) // define the while loop and i should be less than num  
    {  
        sum = sum + i; // store the sum of natural number  
        i++; // increment by 1  
    }  
    printf(" \n Sum of first %d natural number is : %d", num, sum);  

    return 0;
}
