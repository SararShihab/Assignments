#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}n;

n *createNode(int data){
    n *newNode = (n *)malloc(sizeof(n));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int main(){
    n *first = createNode(2);
    n *second = createNode(4);
    n *third = createNode(5);
    n *forth = createNode(6);

    first->next = second;
    second->next = third;
    third->next = forth;

    n *mover1 = first;
    printf("Linked List Before Deletion: ");
    while(mover1 != NULL){
        printf("%d -> ", mover1->data);
        mover1 = mover1->next;
    }
    printf("NULL\n");

    n *temp = first;
    first = first->next;
    
    n *mover2 = first;
    printf("\n'%d' Deleted from the Front.\n", temp->data);
    printf("Linked List After Deletion: ");
    while(mover2 != NULL){
        printf("%d -> ", mover2->data);
        mover2 = mover2->next;
    }
    printf("NULL");
}