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
    

    first->next = second;
    

    n *mover = first;
    printf("Linked List Before: ");
    while (mover != NULL)
    {
        printf("%d -> ", mover->data);
        mover = mover->next;
    }
    printf("NULL\n");

    n *new = createNode(7);
    second->next = new;
    n *move = first;
    printf("Linked List After Insertion: ");
    while (move != NULL)
    {
        printf("%d -> ", move->data);
        move = move->next;
    }
    printf("NULL");
    
    return 0;
}