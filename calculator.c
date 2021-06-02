// A simple program of calculator for two varables taken from user
#include <stdio.h>

int main()
{
    int operators;
    float divide,a,b;

    printf("Enter first number :");     //inputting numbers from user
    scanf("%f",&a);
    printf("Enter second number :");
    scanf("%f",&b);
    printf("press 1 for + , 2 for - , 3 for * , 4 for / ");
    scanf("%d",&operators);
    divide = a/b;

    switch(operators)
    {
        case 1:
            printf("%.2f + %.2f=%.2f\n",a,b,a+b);
            break;
        case 2:
            printf("%.2f - %.2f=%.2f\n",a,b,a-b);
            break;
        case 3:
            printf("%.2f * %.2f=%.2f\n",a,b,a*b);
            break;
        case 4:
            printf("%.2f / %.2f=%.2f\n",a,b,divide);
            break;
        default :
            printf("Invalid input");
    }

    return 0;
}