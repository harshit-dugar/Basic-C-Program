#include <stdio.h>

#define Pi 3.14
int main()
{
    float radius,height,volume,area;
    printf("program to find Area and Volume of a Cylinder:,\n");
    printf("Enter the radius:");
    scanf("%f",&radius);
    printf("Enter height:");
    scanf("%f",&height);
    area = 2*Pi*radius*(radius+height);
    volume = Pi*radius*radius*height;
    printf("volume: %f\n",volume);
    printf("area: %f \n",area);

    return 0;
}