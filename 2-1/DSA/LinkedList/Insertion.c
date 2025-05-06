#include <stdio.h>

#define MAX_NODES 100

struct Node {
    int data;
    struct Node* next;
};


struct Node nodePool[MAX_NODES];
int nodeCount = 0;


struct Node* createNode(int data) {
    if (nodeCount >= MAX_NODES) return NULL;
    nodePool[nodeCount].data = data;
    nodePool[nodeCount].next = NULL;
    return &nodePool[nodeCount++];
}


void insertEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (!newNode) return;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Print the list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);

    printf("Linked List: ");
    printList(head);

    return 0;
}
