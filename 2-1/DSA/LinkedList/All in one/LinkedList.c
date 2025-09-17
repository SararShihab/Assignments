#include <stdio.h>  
#include <stdlib.h>  
  
typedef struct node {  
    int data;  
    struct node* next;  
} node;  
  
typedef struct linkList {  
    node* head;  
} linkList;  
  
linkList lst;  
  
node* createNode(int data) {  
    node* newNode = (node*)malloc(sizeof(node));  
    newNode->data = data;  
    newNode->next = NULL;  
    return newNode;  
}  
  
void append(int data) {  
    node* newNode = createNode(data);  
    if (lst.head == NULL) {  
        lst.head = newNode;  
        return;  
    }  
    node* current = lst.head;  
    while (current->next != NULL) {  
        current = current->next;  
    }  
    current->next = newNode;  
}  
  
void prepend(int data) {  
    node* newNode = createNode(data);  
    newNode->next = lst.head;  
    lst.head = newNode;  
}  
  
void insertAfter(int preV, int data) {  
    if (lst.head == NULL) return;  
    node* current = lst.head;  
    while (current != NULL && current->data != preV) {  
        current = current->next;  
    }  
    if (current == NULL) return; // preV not found  
    node* newNode = createNode(data);  
    newNode->next = current->next;  
    current->next = newNode;  
}  
  
void deleteNode(int data) {  
    if (lst.head == NULL) return;  
    node* current = lst.head;  
    node* prev = NULL;  
    while (current != NULL && current->data != data) {  
        prev = current;  
        current = current->next;  
    }  
    if (current == NULL) return;  
    if (prev == NULL) {  
        lst.head = current->next;  
    } else {  
        prev->next = current->next;  
    }  
    free(current);  
}  
  
void printList() {  
    node* current = lst.head;  
    while (current != NULL) {  
        printf("%d -> ", current->data);  
        current = current->next;  
    }  
    printf("NULL\n");  
}  
  
int main() {  
    lst.head = NULL;  
  
    append(10);  
    append(20);  
    prepend(5);  
    insertAfter(10, 15);  
  
    printList();  // Expected output: 5 -> 10 -> 15 -> 20 -> NULL  
  
    return 0;  
}