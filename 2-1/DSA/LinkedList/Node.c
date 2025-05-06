#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node* address;
}Node;

void create(int n){
    Node* initializeNode = (Node*)malloc(sizeof(Node));
    initializeNode->data = n;
    initializeNode->address = NULL;
    printf("Square of %d the data is %d\n", n, (initializeNode->data)*(initializeNode->data));
    free(initializeNode);
}
int main(){
    create(50);
    return 0;
}