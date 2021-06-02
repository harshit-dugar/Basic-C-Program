/* Algorithmor/logic for this program 
    1.declare the variable pi=3.14 , radius 
    2.Taking the input from the user 
    3.Formula of circumference 
    4.Print the output
*/

#include <stdio.h>

int main()
{
    float pi=3.14;
    printf("Program for Circumference of a circle \n");
    float r,c;
    printf("Enter the Radius:");
    scanf("%f",&r);
    c=2*pi*r;
    printf("Circumference of circle is: %f \n",c);

    return 0;
}