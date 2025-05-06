#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int main()
{
    Node *start = createNode(5);
    Node *node1 = createNode(4);
    Node *node2 = createNode(6);
    Node *node3 = createNode(7);

    start->next = node1;
    node1->next = node2;
    node2->next = node3;

    Node *mover = start;

    while (mover != NULL)
    {
        printf("|%d->%p|=>", mover->data, mover->next);
        mover = mover->next;
    }
    printf("Null\n");

    return 0;
}