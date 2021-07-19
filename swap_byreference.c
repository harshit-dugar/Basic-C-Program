#include <stdio.h>

void swap(int *a,int *b)
{
    int temp;
    temp =*a;
    *a = *b;
    *b = temp;
    printf("After swapping %d %d\n",*a,*b);
}
int main()
{
    int c,d;
    printf("Enter two numbers");
    scanf("%d %d",&c,&d);

    swap(&c,&d); //call by reference mans using pointers

    return 0;
}