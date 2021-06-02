#include <stdio.h>

int main()
{
    float celsius,fahrenheit;
    printf("program for Temperature convesion,\n");
 
    printf(" Enter the Temparature in fahrenhit : \n");
    scanf("%f",&fahrenheit);
 
    celsius = (fahrenheit-32)*5/9;
    printf(" Temperature in celsius : %f ,\n",celsius);

    return 0;
}