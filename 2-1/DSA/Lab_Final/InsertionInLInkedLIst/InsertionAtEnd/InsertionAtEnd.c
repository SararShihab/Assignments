#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}n;

n *createNode(int data){
    n *newNode = (n *)malloc(sizeof(n));
    
}