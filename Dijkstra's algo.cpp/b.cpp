
#include<stdio.h>

typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    int height;
    int balanceFactor;
    int size;
    int count;

} Node;

Node* newNode(int data)
{
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    node->balanceFactor = 0;
    node->size = 1;
    node->count = 1;
    return(node);
}

int max(int a, int b)
 {
    return (a > b)? a : b;
 }
 
 int getHeight(Node *N)
 {
    if (N == NULL)
        return 0;
    return N->height;
 }