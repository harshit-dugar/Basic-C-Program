#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int *ptr;
    ptr = (int*) malloc(n*sizeof(int));
    for(int i = 0 ; i<n ; i++){
        printf("Enter element %d :",i+1);
        scanf("%d",&ptr[i]);
    }

    for(int i = 0 ; i<n ; i++){
        printf("Value of  element %d is : %d \n",i+1 ,ptr[i]);
    }
     
    return 0;
}