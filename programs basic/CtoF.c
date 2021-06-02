#include <stdio.h>

int main()
{
    float celsius,fahrenheit;
    printf("program for Temperature convesion,\n");
 
    printf(" Enter the Temparature in Celsius : \n");
    scanf("%f",&celsius);
 
    fahrenheit = (1.8 * celsius) + 32;
    printf(" Temperature in Fahrenheit : %f ,\n",fahrenheit);

    return 0;
}