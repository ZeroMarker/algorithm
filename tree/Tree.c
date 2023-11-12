#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

struct Node {
    int data;
    Tree left;
    Tree right;
}
typedef struct Node* Tree;

int main() {
    Tree tree = malloc(sizeof(Tree)*SIZE);
    int a[SIZE];
    for(int i = 0; i < SIZE; i++) {
        a[i] = i + 1;
    }
    
}

int initTree(Tree tree, int *a, size) {
    for(int i = 0; i < size; i++) {
        Tree left;
        left.data = a[i++];
        Tree right;
        right.data = a[i];
        initTree(left, a, ++i);
        initTree(right, a, ++i);
    }
}