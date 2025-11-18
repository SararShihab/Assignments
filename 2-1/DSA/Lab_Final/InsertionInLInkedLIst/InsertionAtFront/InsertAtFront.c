#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
        int data;
        struct Node *next;
    }node;

node *createNode(int data){
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}


int main(){
    node *first = createNode(5);
    node *second = createNode(10);
    node *third = createNode(15);
    node *new = createNode(2);

    new->next = first;
    first->next = second;
    second->next = third;
    
    node *mover = new;
    printf("Linked List: ");
    while (mover != NULL){
        printf("%d -> ", mover->data);
        mover = mover->next;
    }
    printf("NULL");

    return 0;

}