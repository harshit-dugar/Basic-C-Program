// P to print reverse of digits
#include <stdio.h>

int main()
{
    int num, digit;
    printf("Enter the number :");
    scanf("%d",&num);

    while(num !=0)              //here we dont need any counter or increment /decrement 
    {                           //  1. 1029%10=9 --> 2. 1029/10=102  and repeat this .
        digit = num % 10;
        num = num / 10;
        printf("%d \n",digit);
    }
    return 0;
}