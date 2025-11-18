#include<stdio.h>

#define SIZE 5

int queue[SIZE];
int front = -1, rear =-1;

void enqueue(int val){
    if(rear == SIZE-1){
        printf("Overflowing, %d cannot be added\n", val);
        return;
    }
    if(front == -1){
        front = 0;
    }
    queue[++rear] = val;

}

int dequeue(){
    if(front == -1){
        return -1;
    }
    return queue[front++];
}

int main(){
    enqueue(2);
    enqueue(4);
    enqueue(6);

    printf("%d dequeued\n", dequeue());
    printf("%d dequeued\n", dequeue());

    enqueue(8);
    enqueue(10);
    enqueue(12);

    for(int i = front; i <= rear; i++){
        printf("%d ", queue[i]);
    }

    return 0;
}