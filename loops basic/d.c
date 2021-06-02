// P to check the number is palidrome or not
#include <stdio.h>

int main() {
    int n, reversedN = 0, r, originalN; //r= remainder
    printf("Enter an integer: ");
    scanf("%d", &n);
    originalN = n;

    while (n != 0) {
        r = n % 10;
        reversedN = reversedN * 10 + r;
        n /= 10;
    }

    if (originalN == reversedN)
        printf("%d is a palindrome.", originalN);
    else
        printf("%d is not a palindrome.", originalN);

    return 0;
}