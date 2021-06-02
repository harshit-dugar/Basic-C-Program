/* P to print digits of given number
   Eg -97839
   outpu-> 9
           7
           8
           3
           9
1. Scan the number which is entered by the usr to know the number of places .
2. scan using loop.
3. Another loop to divide the number by 10^(n-1) to print the number .
*/

#include <stdio.h>
#include <math.h>
int main()
{
    int num,m,c,backup=0,q,i=0;
    printf("Enter the number:");
    scanf("%d",&num);
    c=0;
    backup = num;
    while (num>0)   
    {
        num = num/10;
        c++;
    }
    printf(" Length of number is:%d \n",c);      //length of number 
    
        for(i=1;i<=c;i++)
        {
            m=backup/(pow(10,c-i));
            q=pow(10,c-i);
            backup = backup%q;
            printf("%d\n",m);
        }

    return 0;
}