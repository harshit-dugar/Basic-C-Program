#include <stdio.h>

int main()
{
    printf("program for average of marks of 5 subjects;: ,\n");
    float sub1,sub2,sub3,sub4,sub5,average ;
    printf("Enter marks of maths:\n");
    scanf("%f",&sub1);
    printf("Enter marks of Physics: ,\n");
    scanf("%f",&sub2);
    printf("Enter marks of Chemistry: ,\n");
    scanf("%f",&sub3);
    printf("Enter marks of Biology: ,\n");
    scanf("%f",&sub4);
    printf("Enter marks of CS: ,\n");
    scanf("%f",&sub5);
    average=(sub1+sub2+sub3+sub4+sub5)/5;
    printf("The average marks of all subjects is:%f ,\n",average);

    return 0;
}