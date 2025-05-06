#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node* address;
}Node;

int main(){
    Node* initializeNode = (Node*)malloc(sizeof(Node));
    initializeNode->data = 15;
    initializeNode->address = NULL;
    printf("Square of the data is %d\n", (initializeNode->data)*(initializeNode->data));
    free(initializeNode);
}