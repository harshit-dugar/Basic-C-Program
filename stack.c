#include <stdio.h>
#include <stdlib.h>

struct stack{
    int capacity;
    int top;
    int *arr;
};
int isEmpty(struct stack *s){
    if(s->top == -1){
        return 1;
    }
    else 
        return 0;
}
int isFull(struct stack *s){
    if(s->top == s->capacity-1){
        return 1;
    }
    else 
        return 0;
}
void push(struct stack *s, int value){
    if(isFull(s)){
        printf("Stack Overflow");
    }
    else{
        s->top = s->top +1;
        s->arr[s->top] = value;
    }
}
int pop(struct stack *s){
    if(isEmpty(s)){
        printf("Stack Underflow");
        return -1;
    }
    else{
        int val = s->arr[s->top];
        s->top--;
        return val;
    }
}
int peek(struct stack *s,int n){
    if((s->top -n+1 )<0){
        printf("Invalid position");
        return -1;
    }
    else
        return s->arr[s->top -n +1];
}
int main()
{
    struct stack *s = (struct stack *) malloc(sizeof(struct stack));
    s->capacity = 100;
    s->top = -1;
    s->arr = (int *) malloc(s->capacity*sizeof(int));
    push(s,7);
    printf("%d\n",isEmpty(s));
    printf("%d\n",isFull(s));
    printf("%d Popped from stack\n",pop(s));
    printf("%d Popped from stack\n",pop(s));
    printf("%d st element is %d\n ",2,peek(s,2));
    return 0;    
}