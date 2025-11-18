#include<stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

void push(int data){
    if(top==MAX-1){
        printf("Overflow");
        return;
    }
    stack[++top]=data;
}

int pop(){
    if(top == -1){
        printf("Underflow");
        return -1;
    }
    return stack[top--];
}

int main(){
    push(2);
    push(4);
    push(6);

    printf("%d popped\n", pop());
    printf("%d popped\n", pop());

    push(8);
    push(10);

    for(int i=top; i>=0; i--){
        printf("%d ", stack[i]);
    }
}